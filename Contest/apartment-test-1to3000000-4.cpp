#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  cout << 1'500'000 << ' ' << 3'000'000 << endl;
  for (int i = 1; i < 3'000'000; i++) {
    cout << i << ' ';
  }
  cout << 3'000'000 << endl;
  for (int i = 1; i < 3'000'000; i++) {
    cout << i << ' ';
  }
  cout << 3'000'000 << endl;
}