#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int h, w; cin >> h >> w;
  int n = h * w;
  int sum = 0;
  int minA = 100;
  rep(i, n) {
    int a;
    cin >> a;
    minA = min(minA, a);
    sum += a;
  }

  // output
  cout << sum - minA * n << endl;
}
