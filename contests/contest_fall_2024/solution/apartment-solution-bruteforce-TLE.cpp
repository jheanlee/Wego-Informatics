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

  int tar = 0;
  while (h > height[tar]) tar++;

  if (h == height[tar]) cout << no[tar] << ' ' << no[tar] << endl;
  else cout << no[tar - 1] << ' ' << no[tar] << endl;
  return 0;
}