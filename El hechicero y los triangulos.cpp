#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

struct C{
  double x, y;
};

double areaT(const C& a, const C& b, const C& c){
  return abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) / 2.0;
}

int main(){
  int n;
  double m = 0.0;
  cin >> n;

  vector<C> coor(n);

  for(int i = 0; i < n; i++){
    cin >> coor[i].x >> coor[i].y;
  }

  for(int i = 0; i < n - 2; i++){
    for(int j = i + 1; j < n - 1; ++j){
      for(int k = j + 1; k < n; ++k){
        double area = areaT(coor[i], coor[j], coor[k]);
        if(area > m){
          m = area;
        }
      }
    }
  }

  cout << fixed << setprecision(3) << m;

  return 0;
}
