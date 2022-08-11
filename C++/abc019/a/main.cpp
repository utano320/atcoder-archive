#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector<int> a(3);
  rep(i, 3) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  // output
  cout << a[1] << endl;
}
