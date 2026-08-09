#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, string> m;

  m.insert({1, "one"});     //  insert
  m.insert(make_pair(2, "two"));
  m.emplace(4, "four");     //  emplace
  m.insert(pair<int, string> (3, "three"));
  m[5] = "five";            //  [] operator

  m.insert({2, "two_"});  //  key 重複

  cout << "m: \n";
  for (const pair<const int, string> &p: m) {
    cout << "  {" << p.first << ", " << p.second << "}\n";
  }
  cout << '\n';

  cout << "m.erase(2); \n";
  m.erase(2);
  cout << "m: \n";
  for (const pair<const int, string> &p: m) {
    cout << "  {" << p.first << ", " << p.second << "}\n";
  }
  cout << '\n';

  m[1] = "one_new";
  cout << "m[1] is: " << m[1] << '\n';

  if (m.find(1) != m.end()) {
    cout << "1 is in map m" << '\n';
  } else {
    cout << "1 is not in map m" << '\n';
  }

  if (m.find(2) != m.end()) {
    cout << "2 is in map m" << '\n';
  } else {
    cout << "2 is not in map m" << '\n';
  }

  cout << "Number of 1 in map m: " << m.count(1) << '\n';
  cout << "Number of 2 in map m: " << m.count(2) << '\n';

  cout << '\n';

  unordered_map<int, string> um;
  um.insert({1, "one"});
  um.insert(make_pair(2, "two"));
  um.emplace(4, "four");
  um.insert(pair<int, string> (3, "three"));
  um[5] = "five";
  um.insert({2, "two_"});  //  key 重複

  cout << "um: \n";
  for (const pair<const int, string> &p: um) {
    cout << "  {" << p.first << ", " << p.second << "}\n";
  }
  cout << '\n';

  return 0;
}