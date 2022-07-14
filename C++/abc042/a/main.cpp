#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector<int> x(3);
  rep(i, 3) {
    cin >> x[i];
  }

  sort(x.begin(), x.end());

  // output
  cout << ((x[0] == 5 && x[1] == 5 && x[2] == 7) ? "YES" : "NO") << endl;
}
