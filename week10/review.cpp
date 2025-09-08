#include <bits/stdc++.h>
using namespace std;

int main() {
  /*--------變數宣告--------*/
  int a, b, c;

  /*--------輸入--------*/
  cin >> a >> b >> c; //  cin會依序把資料存入 a, b, c 中

  /*--------輸出--------*/
  cout << "You have entered the following values: " << endl;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;

  int d = 0;
  d = d + 1;
  d += 1;
  cout << "d: " << d << endl; //  d: 2

  string e = "abc";
  cout << "e: " << e << endl; //  e: abc
  cout << "e.size(): " << e.size() << endl; //  e.size(): 3
  cout << "e[1]: " << e[1] << endl;   //  e[1]: b

  e[1] = 'd';
  e += "def";
  cout << "e: " << e << endl; //  e: adcdef
  cout << "e.size(): " << e.size() << endl; //  e.size(): 6
  cout << "e[1]: " << e[1] << endl;   //  e[1]: d

  if (a < 0) {
    cout << "a is negative" << endl;
  } else if (a == 0) {
    cout << "a is zero" << endl;
  } else {
    cout << "a is positive" << endl;
  }

  {
    int i = 0;
    while (i < 3) {
      cout << "i: " << i << endl;
      /*
       * i: 0
       * i: 1
       * i: 2
       */
      i++;
    }
  }

  for (int i = 0; i < 3; i++) {
    cout << "i: " << i << endl;
    /*
     * i: 0
     * i: 1
     * i: 2
     */
  }

  int arr[3] {0, 1, 2};
  for (int i = 0; i < 3; i++) {
    cout << "arr[i]: " << arr[i] << endl;
    /*
     * arr[i]: 0
     * arr[i]: 1
     * arr[i]: 2
     */
  }
  arr[1] = -1;
  for (int i = 0; i < 3; i++) {
    cout << "arr[i]: " << arr[i] << endl;
    /*
     * arr[i]: 0
     * arr[i]: -1
     * arr[i]: 2
     */
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "i: " << i << ", j: " << j << endl;
      /*
       * i: 0, j: 1
       * i: 0, j: 2
       * i: 1, j: 0
       * i: 1, j: 1
       * i: 1, j: 2
       */
    }
  }

  return 0;
}