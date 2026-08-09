#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  cout << 2812500 << ' ' << 2'999'997 << endl;
  for (int i = 1; i < 3'000'000; i++) {
    if (i == 2812500) continue;
    if (i == 57483) continue;
    if (i == 57484) continue;
    cout << i << ' ';
  }
  cout << 3'000'000 << endl;
  for (int i = 1; i < 3'000'000; i++) {
    if (i == 2812500) continue;
    if (i == 57483) continue;
    if (i == 57484) continue;
    cout << i << ' ';
  }
  cout << 3'000'000 << endl;
}