#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> coins;

  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    coins.push_back(tmp);
  }

  int p = m - 1;
  vector<int> used;
  while (n > 0 && p >= 0) {
    while (p >= 0 && n < coins[p]) {
      p--;
    }

    if (p < 0) {
      cout << -1 << '\n';
      return 0;
    }

    for (int i = 0; i < n / coins[p]; i++) {
      used.push_back(coins[p]);
    }
    n %= coins[p];
  }

  cout << used.size() << '\n';
  for (int i = 0; i < used.size() - 1; i++) {
    cout << used[i] << ' ';
  }
  cout << used[used.size() - 1] << '\n';

  return 0;
}