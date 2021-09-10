#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int k,a,b ; cin >> k >> a >> b;
  
  bool f = false;
  
  for (int i = a; i <= b; i++) {
    if (i % k == 0) {
      f = true;
      break;
    }
  }
  cout << ((f) ? "OK" : "NG") << endl;
}