#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int tallest = max(A, max(B, C));
  int smallest = min(A, min(B, C));

  cout << tallest - smallest << endl;
}
