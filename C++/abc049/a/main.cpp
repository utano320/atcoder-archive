#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(char c) {
  string result = "vowel";
  if (c == 'a') return result;
  if (c == 'i') return result;
  if (c == 'u') return result;
  if (c == 'e') return result;
  if (c == 'o') return result;

  return "consonant";
}

int main() {
  // input
  char c; cin >> c;
  // output
  cout << solve(c) << endl;
}
