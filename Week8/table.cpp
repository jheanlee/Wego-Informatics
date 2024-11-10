#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, t;
  cin >> n >> m >> t;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i == t || j == t) {
        cout << 0;
      } else {
        cout << (i + j);
      }

      if (j == m) {
        cout << endl;
      } else {
        cout << ' ';
      }
    }
  }


  return 0;
}