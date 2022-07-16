#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int w, h; cin >> w >> h;

  // output
  cout << ((w * 3 == h * 4) ? "4:3" : "16:9") << endl;
}
