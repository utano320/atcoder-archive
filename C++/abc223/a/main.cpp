#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int x; cin >> x;
  
  cout << ((x > 0 && x % 100 == 0) ? "Yes" : "No") << endl;
}