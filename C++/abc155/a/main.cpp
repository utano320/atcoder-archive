#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b, c ; cin >> a >> b >> c;
  
  cout << ((a == b && b != c || a == c && c != b || b == c && c != a) ? "Yes" : "No") << endl;
}