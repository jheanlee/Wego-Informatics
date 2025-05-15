#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int backtrack(int &index, vector<string> &sec, vector<bool> &used, string &cur, vector<string> &rtn) {
  if (index == sec.size()) {
    cur.pop_back();
    rtn.push_back(cur);
    cur += ' ';
    return 1;
  }

  int rtn_cnt = 0;

  for (int i = 0; i < sec.size(); i++) {
    if (used[i]) continue;
    used[i] = true;
    cur += sec[i];
    cur += ' ';
    index++;
    rtn_cnt += backtrack(index, sec, used, cur, rtn);
    index--;
    for (int j = 0; j < 6; j++) cur.pop_back();
    used[i] = false;
  }

  return rtn_cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<string> sec;

  for (int i = 0; i < n ; i++) {
    string s;
    cin >> s;
    sec.push_back(s);
  }

  vector<bool> used(n, false);
  vector<string> rtn;
  string cur;
  int index = 0;

  cout << backtrack(index, sec, used, cur, rtn) << endl;
  for (string &s : rtn) cout << s << endl;

  return 0;
}