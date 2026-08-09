#include <bits/stdc++.h>
using namespace std;

#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-loop-convert"

int main() {

  int a[5] = {1, 3, 2, 4, 5};

  for (int i = 0; i < 5; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';

  sort(a, a + sizeof(a) / sizeof(int));

  for (int i = 0; i < 5; i++) {
    cout << a[i] << ' ';
  }

  return 0;
}

#pragma clang diagnostic pop