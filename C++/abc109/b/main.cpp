#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(string a, string b) {
  if (a == "") return true;
  if (a[a.size() - 1] == b[0]) return true;
  return false;
}

int main() {
  // input
  int n; cin >> n;
  set<string> w;
  string before = "", current;
  string ans = "Yes";
  rep(i, n) {
    cin >> current;
    // 2度目の単語 or 前の単語と次の単語がつながっていない ⇒ No
    if (w.count(current) > 0 || !solve(before, current)) {
      ans = "No";
      break;
    }
    w.insert(current);
    before = current;
  }

  // output
  cout << ans << endl;
}
