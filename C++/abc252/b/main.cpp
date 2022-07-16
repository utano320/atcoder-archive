#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k; cin >> n >> k;
  set<int> maxIndex;
  int max = 0;
  rep(i, n) {
    int a;
    cin >> a;

    if (a > max) {
      max = a;
      maxIndex.clear();
    }
    if (a == max) {
      maxIndex.insert(i + 1);
    }
  }
  string ans = "No";
  rep(i, k) {
    int b; cin >> b;
    if (maxIndex.count(b)) {
      ans = "Yes";
      break;
    }
  }

  // output
  cout << ans << endl;
}
