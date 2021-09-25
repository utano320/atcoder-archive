#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  float d, t, s; cin >> d >> t >> s;
  
  cout << ((d / s <= t) ? "Yes" : "No") << endl;
}