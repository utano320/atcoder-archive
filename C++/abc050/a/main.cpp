#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string a, op, b; cin >> a >> op >> b;
  int intA = atoi(a.c_str());
  int intB = atoi(b.c_str());

  // output
  cout << ((op == "+") ? intA + intB : intA - intB) << endl;
}
