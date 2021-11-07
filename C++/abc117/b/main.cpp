#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  int lm = 0;
  int sum = 0;
  rep(i, n) {
    int l;
    cin >> l;
    lm = max(lm, l);
    sum += l;
  }

  // output
  cout << ((lm < sum - lm) ? "Yes" : "No") << endl;
}
