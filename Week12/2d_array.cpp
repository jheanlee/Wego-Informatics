#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr_1d[5] {1, 2, 3, 4, 5};

  int arr[3][5] {
      {1,  2,  3,  4,  5},
      {6,  7,  8,  9,  10},
      {11, 12, 13, 14, 15}
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout << arr[i][j];
      if (j < 4) cout << ' '; //  有些線上評測系統不喜歡每行最後一個字元是空格: "abc def" != "abc def "
    }
    cout << endl;
  }

  int *arr_0 = arr[0];

  cout << "arr[2][1] is " << arr[2][1] << endl;

  return 0;
}