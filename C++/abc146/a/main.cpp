#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<string> w;
  
  w.push_back("SUN");
  w.push_back("MON");
  w.push_back("TUE");
  w.push_back("WED");
  w.push_back("THU");
  w.push_back("FRI");
  w.push_back("SAT");
  
  // input
  string s; cin >> s;

  rep(i, 7) {
    if (w[i] == s) {
      cout << 7 - i << endl;
      break;
    }
  }
}