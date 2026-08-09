#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int k;
  cin >> k;

  string a;
  cin >> a;

  if (a.size() < k) {   //  edge case
    cout << 0 << ' ' << 0 << '\n';
    return 0;
  }

  int val = 0;

  int p = 0;

  int maxv = 0, max_count = 0;

  for (; p < k; p++) {
    if (a[p] >= 'A' && a[p] <= 'Z') {
      val += 1;
    } else if (a[p] >= 'a' && a[p] <= 'z') {
      val += 2;
    } else if (a[p] >= '0' && a[p] <= '9') {
      val += 3;
    } else {  //  !@#$%
      val += 4;
    }
  }

  maxv = val;
  max_count = 1;

  for (; p < a.size(); p++) {
    if (a[p - k] >= 'A' && a[p - k] <= 'Z') {
      val -= 1;
    } else if (a[p - k] >= 'a' && a[p - k] <= 'z') {
      val -= 2;
    } else if (a[p - k] >= '0' && a[p - k] <= '9') {
      val -= 3;
    } else {  //  !@#$%
      val -= 4;
    }

    if (a[p] >= 'A' && a[p] <= 'Z') {
      val += 1;
    } else if (a[p] >= 'a' && a[p] <= 'z') {
      val += 2;
    } else if (a[p] >= '0' && a[p] <= '9') {
      val += 3;
    } else {  //  !@#$%
      val += 4;
    }

    if (maxv < val) {
      maxv = val;
      max_count = 1;
    } else if (maxv == val) {
      max_count++;
    }
  }

  cout << maxv << ' ' << max_count << '\n';

  return 0;
}
