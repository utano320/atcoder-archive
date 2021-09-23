#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;

  int min = 1000000000;
  int max = 1;

  rep(i, n) {
    int a; cin >> a;
    if (a < min) min = a;
    if (a > max) max = a;
  }
  
  cout << max - min << endl;
}