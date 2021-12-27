#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string n; cin >> n;
  int sum = 0;
  rep(i, n.size()) {
    int c = n[i] - '0';
    sum += c;
  }

  // output
  cout << ((sum % 9 == 0) ? "Yes" : "No") << endl;
}
