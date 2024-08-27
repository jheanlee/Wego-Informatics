#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  int d;

  cin >> a >> d;

  while (a <= 0) {
    cout << a << endl;
    a += d;
  }

  cout << a << endl; //最後一項
  return 0;
}