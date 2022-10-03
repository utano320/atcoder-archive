#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, a, b; cin >> n >> a >> b;
  int ans = 0;
  rep(i, n) {
    string s;
    int d;
    cin >> s >> d;
    int m = min(max(d, a), b);
    if (s == "East") {
      ans += m;
    } else {
      ans -= m;
    }
  }

  if (ans > 0) {
    cout << "East ";
  } else if (ans < 0) {
    cout << "West ";
  }
  // output
  cout << abs(ans) << endl;
}
