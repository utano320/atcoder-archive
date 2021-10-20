#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int h, w; cin >> h >> w;
  vector<string> a(h);

  for (int i = 0; i < h; i++) {
    cin >> a[i];
  }

  set<int> ei;
  set<int> ej;

  for (int i = 0; i < h; i++) {
    bool ex = true;
    for (int j = 0; j < w; j++) {
      if (a[i][j] == '#') {
        ex = false;
        break;
      }
    }
    if (ex) {
      ei.insert(i);
    }
  }

  for (int j = 0; j < w; j++) {
    bool ex = true;
    for (int i = 0; i < h; i++) {
      if (a[i][j] == '#') {
        ex = false;
        break;
      }
    }
    if (ex) {
      ej.insert(j);
    }
  }

  for (int i = 0; i < h; i++) {
    // 除外する行の場合スキップ
    if (ei.count(i) == 1) continue;
    for (int j = 0; j < w; j++) {
      // 除外する列の場合スキップ
      if (ej.count(j) == 1) continue;
      cout << a[i][j];
    }
    cout << endl;
  }
}
