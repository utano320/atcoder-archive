#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector< vector<char> > a(4, vector<char>(4));
  rep(i, 4) {
    rep(j, 4) {
      cin >> a[i][j];
    }
  }

  for (int i = 3; i >= 0; i--) {
    for (int j = 3; j >= 0; j--) {
      cout << a[i][j];
      if (j == 0) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
}
