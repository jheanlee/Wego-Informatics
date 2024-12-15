#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  int n;
  cin >> c >> n;

  string rtn;

  bool flag_not_a_card = false;

  switch (c) {
    case 'c':
      rtn = " of clubs\n";
      break;
    case 'h':
      rtn = " of hearts\n";
      break;
    case 'd':
      rtn = " of diamonds\n";
      break;
    case 's':
      rtn = " of spades\n";
      break;
    default:
      flag_not_a_card = true;
  }

  if (!flag_not_a_card && 1 <= n && n <= 13) {
    switch (n) {
      case 1:
        cout << "ace" << rtn;
        break;
      case 11:
        cout << "jack" << rtn;
        break;
      case 12:
        cout << "queen" << rtn;
        break;
      case 13:
        cout << "king" << rtn;
        break;
      default:
        cout << n << rtn;
    }
  } else {
    cout << "not a card" << endl;
  }


  return 0;
}