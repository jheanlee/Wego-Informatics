#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  priority_queue<pair<int, string>> pq;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int a = 1, b = 1, c = 1, d = 1;

    for (char chr: s) {
      if (chr >= 'a' && chr <= 'z') a++;
      else if (chr >= 'A' && chr <= 'Z') b++;
      else if (chr >= '0' && chr <= '9') d++;
      else c++;
    }

    pq.emplace(s.size() * s.size() * s.size() * a * b * c * d, s);
  }

  int mp = pq.top().first;
  cout << pq.top().first << endl;
  while (!pq.empty() && pq.top().first == mp) {
    cout << pq.top().second << endl;
    pq.pop();
  }

  return 0;
}
