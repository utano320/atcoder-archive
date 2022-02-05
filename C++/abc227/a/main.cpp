#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k, a; cin >> n >> k >> a;
  // 最後に配られる人
  int ans = a + k - 1;
  // 周回を考慮
  ans = ans % n;
  // ans = 0 の場合は最後の人
  ans = ((ans == 0) ? n : ans);

  // output
  cout << ans << endl;
}
