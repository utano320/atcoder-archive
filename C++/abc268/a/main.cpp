#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  set<int> s;
  rep(i, 5) {
    int a; cin >> a;
    s.insert(a);
  }

  // output
  cout << s.size() << endl;
}
