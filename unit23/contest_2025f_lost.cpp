#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  int i0, j0, i1, j1;
  cin >> i0 >> j0 >> i1 >> j1;

  vector<vector<int>> m(n, vector<int>(n, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int tmp;
      cin >> tmp;
      m[i][j] = tmp;
    }
  }

  // {{i_c, j_c}, length}
  queue<pair<pair<int, int>, int>> q;
  q.emplace(make_pair(i0, j0), 0);

  while (!q.empty()) {
    pair<pair<int, int>, int> curr = q.front();
    q.pop();

    if (curr.first.first < 0 || curr.first.first >= n || curr.first.second < 0 || curr.first.second >= n) { //  出界
      continue;
    }

    if (m[curr.first.first][curr.first.second] == 0) {  //  樹林或找過了
      continue;
    }

    if (curr.first.first == i1 && curr.first.second == j1) {  //  找到了
      cout << curr.second << '\n';
      return 0;
    }

    m[curr.first.first][curr.first.second] = 0; //  找過不要再找一遍，避免繞圈圈

    q.emplace(make_pair(curr.first.first + 1, curr.first.second), curr.second + 1);
    q.emplace(make_pair(curr.first.first - 1, curr.first.second), curr.second + 1);
    q.emplace(make_pair(curr.first.first, curr.first.second + 1), curr.second + 1);
    q.emplace(make_pair(curr.first.first, curr.first.second - 1), curr.second + 1);
  }

  cout << -1 << '\n';
  return 0;
}