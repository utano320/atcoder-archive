  #include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  // solve
  int ans = a + b;

  // output
  if (ans < 10) {
    cout << ans << endl;
  } else {
    cout << "error" << endl;
  }
  
}
