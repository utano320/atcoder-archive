#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  set<int> x;
  rep(i, 3) {
    int a;
    cin >> a;
    x.insert(a);
  }

  // output
  cout << x.size() << endl;
}
