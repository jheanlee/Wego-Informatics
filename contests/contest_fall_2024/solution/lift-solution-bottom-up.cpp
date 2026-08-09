#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define mod (int)1e7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;

  vector<int> dp(n + 1, 0); //  dp[floor] = number of ways to reach floor (1-index)
  vector<pair<int, int>> lifts;

  for (int i = 0; i < m; i++) {
    int f1, f2;
    cin >> f1 >> f2;
    lifts.emplace_back(f1, f2);
  }
  sort(lifts.begin(), lifts.end());


  dp[1] = 1;

  if (!lifts.empty() && lifts[0].first == 1) {
    int idx = 0;
    while (idx < m) {
      dp[lifts[idx].second] += dp[lifts[idx].first];
      dp[lifts[idx].second] %= mod;
      idx++;
    }
  }

  cout << dp[n] << endl;

  return 0;
}