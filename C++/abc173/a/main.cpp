#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;
  int a = n % 1000;

  cout << ((a == 0) ? 0 : 1000 - a) << endl;
}