#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b, c ; cin >> a >> b >> c;

  int t;
  t = a;
  a = b;
  b = t;

  t = a;
  a = c;
  c = t;
  
  cout << a << ' ' << b << ' ' << c << endl;
}