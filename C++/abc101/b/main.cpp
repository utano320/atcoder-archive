#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string n; cin >> n;

  int s = 0;
  rep(i, n.size()) {
    s += n[i] - '0';
  }

  cout << ((stoi(n) % s == 0) ? "Yes" : "No") << endl;
}