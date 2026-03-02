#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  string line;
  line += '.';
  line += string(n - 2, '*');
  line += '.';

//  for (int i = 0; i < n; i++) {
//    string line;
//
//    if (i == 0 || i == n - 1) {
//      line = string(n, '.');
//    } else {
//      for (int j = 0; j < n; j++) {
//        if (j == 0 || j == n - 1) {
//          line += '.';
//        } else {
//          line += '*';
//        }
//      }
//    }
//
//    cout << line << '\n';
//  }

  for (int i = 0; i < n; i++) {
    if (i == 0 || i == n - 1) {
      cout << string(n, '.') << '\n';
    } else {
      cout << line << '\n';
    }
  }

  return 0;
}