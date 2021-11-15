#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string n; cin >> n;
  int a = 4 - n.size();
  rep(i, a) {
    n = "0" + n;
  }
  cout << n << endl;
}