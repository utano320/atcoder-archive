#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m; cin >> n >> m;
  vector<int> a(n);
  double sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }
  int count = 0;
  double th = sum / (4 * m);
  rep(i, n) {
    if (a[i] >= th) count++;
  }

  // output
  cout << (count >= m ? "Yes" : "No") << endl;
}
