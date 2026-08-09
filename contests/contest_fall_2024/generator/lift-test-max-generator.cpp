#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  int n = opt<int>("floors");

  cout << n << ' ' << (n * (n - 1) / 2) << endl;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i; j++) {
      cout << j << ' ' << i << endl;
    }
  }
}