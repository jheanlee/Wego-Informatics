// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppRedundantAccessSpecifier
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int, int>>> adj(n);
    for (vector<int> &v: times) {
      adj[v[0] - 1].emplace_back(v[2], v[1] - 1);
    }

    vector<int> distance(n, INT_MAX);
    distance[k - 1] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    pq.emplace(0, k - 1);

    while (!pq.empty()) {
      int dist = pq.top().first;
      int u = pq.top().second;
      pq.pop();

      for (pair<int, int> &p: adj[u]) {
        if (dist + p.first < distance[p.second]) {
          distance[p.second] = p.first + dist;
          pq.emplace(p.first + dist, p.second);
        }
      }
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
      ans = max(ans, distance[i]);
    }

    return ans == INT_MAX ? -1 : ans;
  }
};