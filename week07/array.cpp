#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[5] = {0, 1, 2, 3, 4};

  cout << "arr 第一個成員是(位置0): " << arr[0] << '\n';

  cout << "----------分隔線----------\n";

  string strings[10] = {"zero", "one", "two", "three", "four"};
  for (int i = 0; i < 5; i++) {
    cout << "strings[" << i << "]:" << strings[i] << '\n';
  }
  cout << "----------分隔線----------\n";

  strings[0] = "one";
  strings[5] = "five";
  for (int i = 0; i < 6; i++) {
    cout << "strings[" << i << "]:" << strings[i] << '\n';
  }


  return 0;
}