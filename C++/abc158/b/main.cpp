#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  long long  n, a, b; cin >> n >> a >> b;
  long long c = a + b;
  long long ans = (n / c) * a;
  long long d = n % c;
  ans += min(a, d);

  // output
  cout << ans << endl;
}
