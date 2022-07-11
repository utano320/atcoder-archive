#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  double pi = 3.141592653589793;
  double a, b, d; cin >> a >> b >> d;
  double r = d * pi / 180;
  double x = a * cos(r) - b * sin(r);
  double y = a * sin(r) + b * cos(r);

  // output
  cout << fixed << setprecision(6) << x << ' ' << y << endl;
}
