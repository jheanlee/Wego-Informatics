#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);

  int output_len = ouf.readInt(1, 40320, "olen"), jury_len = ans.readInt(1, 40320, "jlen");
  int n = inf.readInt(1, 8, "n");
  vector<string> output_str;
  vector<string> jury_str;
  ouf.readEoln();
  ans.readEoln();

  if (output_len != jury_len) quitf(_wa, "answer length does not match jury's");

  string format_str;
  for (int i = 0; i < n; i++) {
    format_str += "[a-z]{5}";
    if (i < n - 1) format_str += "\\ ";
  }


  for (int i = 0; i < output_len; i++) {
    output_str.push_back(ouf.readLine(format_str, "oline"));
    jury_str.push_back(ans.readLine(format_str, "jline"));
  }
  if (!ouf.eof()) quitf(_wa, "answer length does not match actual length");

  sort(output_str.begin(), output_str.end());
  sort(jury_str.begin(), jury_str.end());

  for (int i = 0; i < output_len; i++) {
    if (output_str[i] != jury_str[i]) quitf(_wa, "answer does not match jury's %s, %s", output_str[i].c_str(), jury_str[i].c_str());
  }

  quitf(_ok, "good answer");
}