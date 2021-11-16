#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int count = 0;
  int hm = 0;
  rep(i, n) {
    int h;
    cin >> h;
    hm = max(hm, h);
    if (hm == h) {
      ++count;
    }
  }

  // output
  cout << count << endl;
}
