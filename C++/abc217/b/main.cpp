#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  set<string> s;
  
  s.insert("ABC"); s.insert("ARC"); s.insert("AGC"); s.insert("AHC");
  rep(i, 3) {
    string t;
    cin >> t;
    s.erase(t);
  }

  if (s.count("ABC") == 1) {
    cout << "ABC";
  } else if (s.count("ARC") == 1) {
    cout << "ARC";
  } else if (s.count("AGC") == 1) {
    cout << "AGC";
  } else {
    cout << "AHC";
  }

  cout << endl;
}
