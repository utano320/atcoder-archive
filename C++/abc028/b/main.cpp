#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  map<char, int> m;
  m['A'] = 0;
  m['B'] = 0;
  m['C'] = 0;
  m['D'] = 0;
  m['E'] = 0;
  m['F'] = 0;

  rep(i, s.size()) {
    m[s[i]]++;
  }

  cout << m['A'] << ' ';
  cout << m['B'] << ' ';
  cout << m['C'] << ' ';
  cout << m['D'] << ' ';
  cout << m['E'] << ' ';
  cout << m['F'] << endl;
}
