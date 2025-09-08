#include <iostream>
#include <string>
using namespace std;

int main() {
  char c = 'c';
  cout << "c: " << c << endl;

  string s = "str";
  cout << "s: " << s << endl;
  s += "ing";
  cout << "s + \"ing\": " << s << endl << endl;

  string t = "str";
  cout << "t: " << t << endl;
  cout << "size of t: " << t.size() << endl;
  cout << "first item (t[0]) of t: " << t[0] << endl;

  return 0;
}