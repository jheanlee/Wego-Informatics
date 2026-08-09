#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    /*
     * 或者也可以寫:
     * int tmp;
     * cin >> tmp;
     * a[i] = tmp;
     */
  }

  int m;
  cin >> m;

  sort(a, a + sizeof(a) / sizeof(int));

  cout << a[m - 1] << endl;

  return 0;
}