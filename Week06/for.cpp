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

  /*
   *  for (初始變數; 終止條件; 加減) {
   *    code_true();
   *  }
   */
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

  for (int i = 0; i < 3; i++) {
    cout << "第" << i << "次 continue前面" << endl;
    if (i == 1) {
      continue;  //如果 i == 1 就跳過
    }
    cout << "第" << i << "次 continue後面" << endl;
  }

  return 0;
}