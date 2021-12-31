#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

ll manhattan(int n, const vector<ll>& x) {
  ll ans = 0;

  rep(i, n) {
    ans += abs(x[i]);
  }

  return ans;
}

double euclid(int n, const vector<ll>& x) {
  double ans = 0;

  rep(i, n) {
    ans += pow(x[i], 2);
  }

  return sqrt(ans);
}

ll chebyshev(int n, const vector<ll>& x) {
  ll ans = 0;

  rep(i, n) {
    ans = max(ans, abs(x[i]));
  }

  return ans;
}

int main() {
  // input
  int n; cin >> n;
  vector<ll> x(n);
  rep(i, n) {
    cin >> x[i];
  }

  ll ans1 = manhattan(n, x);
  double ans2 = euclid(n, x);
  ll ans3 = chebyshev(n, x);

  // output
  printf("%lld\n", ans1);
  printf("%.15f\n", ans2);
  printf("%lld\n", ans3);
}
