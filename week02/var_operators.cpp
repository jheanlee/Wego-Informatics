#include <bits/stdc++.h>
using namespace std;

int main() { //                              \
  宣告一個變數的方式:                           \
  type   name    = value;
  bool some_bool = true;

  bool a = false;
  bool b = 0;
  bool c = true;
  bool d = 1;
  cout << "a: " << a << endl; // 0
  cout << "b: " << b << endl; // 0
  cout << "c: " << c << endl; // 1
  cout << "d: " << d << endl; // 1


  int e = 0;
  int f = 1;
  int g = -1;
  int h = -2147483648;
  cout << "e: " << e << endl; // 0
  cout << "f: " << f << endl; // 1
  cout << "g: " << g << endl; // -1
  cout << "h: " << h << endl; // -2147483648

  cout << "----------分隔線----------" << endl;

  int i = 100;
  cout << "i: " << i << endl; // 100
  cout << "i + 2: " << i + 2 << endl; // 102
  cout << "i - 2: " << i - 2 << endl; // 98
  cout << "i * 2: " << i * 2 << endl; // 200
  cout << "i / 2: " << i / 2 << endl; // 50
  cout << "i % 2: " << i % 2 << endl; // 0
  i++; // i == 101
  cout << "i after i++: " << i << endl; // 101
  cout << "i % 2 after i++: " << i % 2 << endl; // 1

  cout << "----------分隔線----------" << endl;

  int j = 10;
  int k = 11;
  cout << "j: " << j << endl; // 10
  cout << "k: " << k << endl; // 11
  j = k; // j == k == 11
  cout << "j after j = k: " << j << endl; // 11
  cout << "k after j = k: " << k << endl; // 11

  cout << "----------分隔線----------" << endl;

  int l = 100;
  int m = 100;
  cout << "l: " << l << endl; //  100
  cout << "m: " << m << endl; //  100
  l += 1;
  m = m + 1;
  cout << "l after l += 1: " << l << endl;  //  101
  cout << "m after m = m + 1: " << m << endl; //  101
  return 0;
}



