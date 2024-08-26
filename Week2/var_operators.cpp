#include <iostream>
using namespace std;

int main() { //                             \
  宣告一個變數的方式:                           \
  type   name    = value;
  bool some_bool = true;

  bool a = false;
  bool b = 0;
  bool c = true;
  bool d = 1;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;
  cout << "d: " << d << endl;


  int e = 0;
  int f = 1;
  int g = -1;
  int h = -2147483648;
  cout << "e: " << e << endl;
  cout << "f: " << f << endl;
  cout << "g: " << g << endl;
  cout << "h: " << h << endl;

  cout << "----------分隔線----------" << endl;

  int i = 100;
  cout << "i: " << i << endl;
  cout << "i + 2: " << i + 2 << endl;
  cout << "i - 2: " << i - 2 << endl;
  cout << "i * 2: " << i * 2 << endl;
  cout << "i / 2: " << i / 2 << endl;
  cout << "i % 2: " << i % 2 << endl;
  i++;
  cout << "i after i++: " << i << endl;
  cout << "i % 2 after i++: " << i % 2 << endl;

  cout << "----------分隔線----------" << endl;

  int j = 10;
  int k = 11;
  cout << "j: " << j << endl;
  cout << "k: " << k << endl;
  j = k;
  cout << "j after j = k: " << j << endl;
  cout << "k after j = k: " << k << endl;

  cout << "----------分隔線----------" << endl;

  int l = 100;
  int m = 100;
  cout << "l: " << l << endl;
  cout << "m: " << m << endl;
  l += 1;
  m = m + 1;
  cout << "l after l += 1: " << l << endl;
  cout << "m after m = m + 1: " << m << endl;
  return 0;
}



