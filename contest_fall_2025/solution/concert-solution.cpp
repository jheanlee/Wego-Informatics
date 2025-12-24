#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int k;
  cin >> k;
  int a, b;
  cin >> a >> b;

  k -= a;
  k -= b;

  if (k >= 15000) {
    cout << 0 << ' ' << k - 15000 << '\n';
  } else if (k >= 14000) {
    cout << 1 << ' ' << k - 14000 << '\n';
  } else if (k >= 13000) {
    cout << 2 << ' ' << k - 13000 << '\n';
  } else if (k >= 9800) {
    cout << 3 << ' ' << k - 9800 << '\n';
  } else if (k >= 8300) {
    cout << 4 << ' ' << k - 8300 << '\n';
  } else {
    cout << -1 << '\n';
  }

  return 0;
}