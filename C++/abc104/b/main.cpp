#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s; cin >> s;
  int len = s.size();

  string ans = "AC";
  // 1. 先頭の文字は大文字のA
  if (s[0] != 'A') ans = "WA";
  // 2. s[2]〜s[len-2]に大文字のCが1個だけ
  if (ans == "AC") {
    int count = 0;
    for (int i = 2; i < len - 1; i++) {
      if (s[i] == 'C') count++;
    }
    if (count != 1) ans = "WA";
  }
  // 3. A,Cを除いて小文字
  if (ans == "AC") {
    for (int i = 1; i < len; i++) {
      if ((s[i] < 'a' || s[i] > 'z') && !(s[i] == 'C' && i >= 2 && i < len - 1)) {
        ans = "WA";
        break;
      }
    }
  }

  cout << ans << endl;
}