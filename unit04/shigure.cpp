#include <bits/stdc++.h>
using namespace std;

int main() {
  int i;
  int a;

  cin >> i >> a;

  if (i == 0) {
    cout << "Yes" << endl;
    cout << 13000 << endl;
  } else if (i == 1) {
    cout << "Yes" << endl;
    cout << 9000 << endl;
  } else {
    if (a >= 15 && a <= 18) {
      cout << "Yes" << endl;
      cout << 7500 << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}