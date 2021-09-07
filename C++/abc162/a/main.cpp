#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string n; cin >> n;
  
  bool ans = false;
  rep(i, 3) {
    if (n[i] == '7') ans = true;
  }
  cout << ((ans) ? "Yes" : "No") << endl;
}