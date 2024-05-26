#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, m = 0;

  cin >> n;
  vector<int> arr(n);

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  for(int i = 0; i < n - 1; i++){
    int inter = arr[i + 1] - arr[i];
    if(inter > m){
      m = inter;
    }
  }

  cout << m;

  

  return 0;
}
