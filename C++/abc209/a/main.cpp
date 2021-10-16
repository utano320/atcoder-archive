#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b; cin >> a >> b;
  
  cout << ((a <= b) ? b - a + 1 : 0) << endl;
}