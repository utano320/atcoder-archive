#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    if (mp.count(s) == 0) {
      mp[s] = 1;
    } else {
      mp[s]++;
    }
  }

  // output
  cout << "AC x " << ((mp.count("AC") == 0) ? 0 : mp["AC"]) << endl;
  cout << "WA x " << ((mp.count("WA") == 0) ? 0 : mp["WA"]) << endl;
  cout << "TLE x " << ((mp.count("TLE") == 0) ? 0 : mp["TLE"]) << endl;
  cout << "RE x " << ((mp.count("RE") == 0) ? 0 : mp["RE"]) << endl;
}
