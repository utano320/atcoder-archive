#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector<int> d(3);
  rep(i, 3) {
    cin >> d[i];
  }

  sort(d.begin(), d.end());

  // output
  cout << d[2] * 10 + d[0] + d[1] << endl;
}
