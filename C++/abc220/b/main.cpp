#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long solve(string x, long long k) {
  long long ans = 0;
  long long len = x.size();
  rep(i, len) {
    ans += (x[i] - '0') * pow(k, len - i - 1);
  }

  return ans;
}

int main() {
  // input
  long long k; cin >> k;
  string a, b; cin >> a >> b;

  // solve
  long long ans = solve(a, k) * solve(b, k);

  // output
  cout << ans << endl;
}
