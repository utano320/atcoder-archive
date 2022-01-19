#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  rep(i, 26) {
    int p; cin >> p;
    printf("%c", 'a' + (p - 1));
  }

  cout << endl;
}
