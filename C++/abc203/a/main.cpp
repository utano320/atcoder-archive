#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<int> a(3);

  rep(i, 3) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int ans = 0;
  if (a[0] == a[1]) {
    ans = a[2];
  } else if (a[1] == a[2]) {
    ans = a[0];
  }
  
  cout << ans << endl;
}