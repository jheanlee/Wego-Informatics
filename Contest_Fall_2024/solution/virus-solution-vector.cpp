#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


// solution not complete
int main() {
  int n, m, t;
  cin >> n >> m >> t;

  unordered_set<int> av;
  vector<int> roots(n + 1);
  for (int i = 0; i < n; i++) {
    roots[i + 1] = i + 1;
  }

  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    av.insert(tmp);
  }

  int u, v;
  for (int i = 0; i < t; i++) {
    cin >> u >> v;
    if (av.find(u) != av.end() || av.find(v) != av.end()) continue;
    if (roots[u] == roots[v]) continue;
    if (roots[u] == u && roots[v] == v) roots[v] = u;
    else if (roots[u] == u) roots[v] = u;
    else if (roots[v] == v) roots[u] = v;


  }



  return 0;
}