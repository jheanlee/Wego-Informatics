#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  vector<int> a;
  int val = 0;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    val += min(tmp, a[i]);
  }

  cout << val << '\n';

  return 0;
}