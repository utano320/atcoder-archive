#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;
  x--;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }

  set<int> s;
  // 友達xに伝わった
  s.insert(x);
  // 次に教える友達
  int i = a[x];
  while (s.count(i) == 0) {
    // 友達iに伝わった
    s.insert(i);
    // 次に教える友達
    i = a[i];
  }

  // output
  cout << s.size() << endl;
}
