#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int h, n;
  cin >> h >> n;

  vector<int> no;
  vector<int> height;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    no.push_back(tmp);
  }

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    height.push_back(tmp);
  }

  int l = 0, m, r = n - 1;

  // [l, r] binary search
  while (l <= r) {
    m = l + (r - l) / 2;
    if (height[m] < h) {
      l = m + 1;
    } else if (height[m] > h) {
      r = m - 1;
    } else {
      l = m;
      r = m;
      break;
    }
  }

  cout << no[r] << ' ' << no[l] << endl;
  return 0;
}