#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  cout << "Christmas";
  for (int i = 24; i >= n; i--) {
    cout << " Eve";
  }
  // output
  cout << endl;
}
