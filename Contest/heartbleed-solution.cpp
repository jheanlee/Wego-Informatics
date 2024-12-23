#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  int len;
  cin >> len;
  string heartbeat;
  cin >> heartbeat;

  if (len == heartbeat.size()) cout << heartbeat << endl;
  else cout << "INVALID" << endl;

  return 0;
}