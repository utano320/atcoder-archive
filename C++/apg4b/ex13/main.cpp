#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
    sum += A.at(i);
  }

  int avg = sum / N;
  for (int i = 0; i < N; i++) {
    cout << abs(A.at(i) - avg) << endl;
  }
}