#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int w1, w2;
  cin >> w1 >> w2;
  int wl;
  cin >> wl;

  if (w1 + w2 > wl) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
    cout << wl - (w1 + w2) << endl;
  }

  return 0;
}