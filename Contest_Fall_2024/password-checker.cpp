#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);

  vector<string> output_str;
  vector<string> jury_str;

  int output_mp = ouf.readInt(1, 10368000, "out_mp"), jury_mp = ans.readInt(1, 10368000, "ans_mp");
  if (output_mp != jury_mp) quitf(_wa, "output's value does not match jury's");
  ouf.readEoln(); ans.readEoln();
  while (!ouf.eof() && !ans.eof()) {
    if (ouf.eof()) quitf(_wa, "output's answer is shorter than jury's");
    if (ans.eof()) quitf(_wa, "output's answer is longer than jury's");

    string ouf_string = ouf.readString("[a-zA-Z0-9!@#$%]{1,100}", "ouf_str");
    string jury_string = ans.readString("[a-zA-Z0-9!@#$%]{1,100}", "ans_str");

    output_str.push_back(ouf_string);
    jury_str.push_back(jury_string);
  }

  sort(output_str.begin(), output_str.end());
  sort(jury_str.begin(), jury_str.end());

  for (int i = 0; i < output_str.size(); i++) {
    if (output_str[i] != jury_str[i]) quitf(_wa, "output's answer does not match jury's");
  }
  quitf(_ok, "answer is correct");

}