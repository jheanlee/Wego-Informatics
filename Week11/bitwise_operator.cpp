#include <bits/stdc++.h>
using namespace std;

int main() {

  int lhs, rhs;
  cin >> lhs >> rhs;

  cout << lhs << ": \n" << bitset<32> (lhs) << endl;
  cout << rhs << ": \n" << bitset<32> (rhs) << endl;

  cout << "lhs & rhs " << (lhs & rhs) << ": \n" << bitset<32> (lhs & rhs) << endl;
  cout << "lhs | rhs " << (lhs | rhs) << ": \n" << bitset<32> (lhs | rhs) << endl;
  cout << "lhs ^ rhs " << (lhs ^ rhs) << ": \n" << bitset<32> (lhs ^ rhs) << endl;
  cout << "~lhs " << (~lhs) << ": \n" << bitset<32> (~lhs) << endl;
  cout << "lhs << 1 " << (lhs << 1) << ": \n" << bitset<32> (lhs << 1) << endl;
  cout << "lhs >> 1 " << (lhs >> 1) << ": \n" << bitset<32> (lhs >> 1) << endl;



  return 0;
}