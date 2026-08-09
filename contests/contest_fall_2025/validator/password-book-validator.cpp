#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  inf.readInt(1, 20, "k");
  inf.readEoln();
  inf.readString("[a-zA-z0-9!@#$%]{0,100}", "s");
  inf.readEof();
}