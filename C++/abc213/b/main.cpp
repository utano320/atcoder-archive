#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int firstValue = 0, firstIndex = -1;
  int secondValue = 0, secondIndex = -1;
  rep(i, n) {
    int a; cin >> a;
    if (firstValue < a) {
      secondValue = firstValue;
      secondIndex = firstIndex;
      firstValue = a;
      firstIndex = i;
    } else if (secondValue < a) {
      secondValue = a;
      secondIndex = i;
    }
  }

  // output
  cout << (secondIndex + 1) << endl;
}
