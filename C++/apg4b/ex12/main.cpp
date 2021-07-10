#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int ans = 1;
  for (int i = 1; i < S.size() - 1; i += 2)
  {
    char s = S.at(i);
    if (s == '+') {
      ans++;
    } else {
      ans--;
    }
  }

  cout << ans << endl;
}
