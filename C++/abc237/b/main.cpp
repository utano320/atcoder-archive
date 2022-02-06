#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int h, w; cin >> h >> w;
  vector< vector<int> > a(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }

  for (int j = 0; j < w; j++) {
    for (int i = 0; i < h; i++) {
      cout << a[i][j];
      if (i == h - 1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
}
