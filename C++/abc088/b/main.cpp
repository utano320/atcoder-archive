#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  int sumA = 0, sumB = 0;
  rep(i, n) {
    if (i % 2 == 0) {
      sumA += a[i];
    } else {
      sumB += a[i];
    }
  }

  // output
  cout << sumA - sumB << endl;
}
