#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  int p;
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;
  if (a == c || a == d) {
    p = a;
  } else if (b == c || b == d) {
    p = b;
  } else {
    cout << "No" << endl;
    exit(0);
  }

  rep(i, n - 3) {
    cin >> a >> b;
    if (p != a && p != b) {
      cout << "No" << endl;
      exit(0);
    }
  }

  cout << "Yes" << endl;
}
