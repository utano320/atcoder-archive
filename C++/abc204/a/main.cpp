#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int x, y; cin >> x >> y;
  
  cout << ((x == y) ? x : 3 - x - y) << endl;
}