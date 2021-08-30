#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t ; cin >> s >> t;
  int a, b; cin >> a >> b;
  string u; cin >> u;
  
  if (s == u) {
    a--;
  } else {
    b--;
  }
  cout << a << " " << b << endl;
}