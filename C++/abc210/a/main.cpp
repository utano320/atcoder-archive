#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, a, x, y; cin >> n >> a >> x >> y;
  
  
  cout << ((n > a) ? x * a + y * (n - a) : x * n) << endl;
}