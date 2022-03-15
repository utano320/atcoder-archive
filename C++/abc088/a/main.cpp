#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, a; cin >> n >> a;

  int d = n % 500;
  // output
  cout << (d <= a ? "Yes" : "No") << endl;
}
