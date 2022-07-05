#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  if (n >= 60) {
    cout << "22:";
  } else {
    cout << "21:";
  }

  n %= 60;
  cout << setfill('0') << right << setw(2) << n << endl;
}
