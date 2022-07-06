#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input

  vector<int> ans(2);
  rep(i, 2) {
    int a; cin >> a;

    switch (a) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        ans[i] = 0;
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        ans[i] = 1;
        break;
      case 2:
        ans[i] = 2;
        break;
    }
  }

  // output
  cout << ((ans[0] == ans[1]) ? "Yes" : "No") << endl;
}
