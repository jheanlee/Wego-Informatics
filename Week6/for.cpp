#include <bits/stdc++.h>
using namespace std;

int main() {
  /*
   * for (需要的變數 ; 條件 ; 每次結束做的動作 ) {
   *   //code
   * }
   */

  // -----for-----
  // 寫法 1: while
  {
    int i = 0;
    while (i < 10) {
      cout << i << '\n';
      i++;
    }
  }
  cout << "----------分隔線----------\n";

  // 寫法 2: for
  for (int i = 0; i < 10; i++) {
    cout << i << '\n';
  }
  cout << "----------分隔線----------\n";

  {
    int i = 0;
    for (; i < 10; i++) { // for 也可以不宣告 你高興就好
      cout << i << '\n';
    }
  }
  cout << "----------分隔線----------\n";

  // -----break-----
  {
    int i = 0;
    while (i < 1000000) {

      if (i == 10) {
        break;  // 碰到這裡會直接離開迴圈
      }

      cout << i << '\n';
      i++;
    }
  }
  cout << "----------分隔線----------\n";

  // -----continue-----
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      continue;
    }

    cout << i << '\n';
  }
  cout << "----------分隔線----------\n";

  return 0;
}