#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int s = n % 60;
  int m = (n / 60) % 60;
  int h = (n / 3600) % 60;
  // output
  printf("%02d:%02d:%02d\n", h, m, s);
}
