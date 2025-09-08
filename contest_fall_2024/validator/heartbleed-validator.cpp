#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);

  inf.readInt(1, 100, "stated_heartbeat_size");
  inf.readEoln();
  inf.readString("[a-z]{1, 100}", "heartbeat_message");
  inf.readEof();
}