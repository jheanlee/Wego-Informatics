#include <bits/stdc++.h>
using namespace std;

int main() {

  int value;
  cin >> value;

  if (value == 1) {
    cout << "one" << endl;
  } else if (value == 2) {
    cout << "two" << endl;
  } else if (value == 3) {
    cout << "three" << endl;
  } else if (value == 4) {
    cout << "four" << endl;
  } else if (value == 5) {
    cout << "five" << endl;
  } else {
    cout << "none of above" << endl;
  }

  switch (value) {
    case 1:
      cout << "one" << endl;
      break;
    case 2:
      cout << "two" << endl;
      break;
    case 3:
      cout << "three" << endl;
      break;
    case 4:
      cout << "four" << endl;
      break;
    case 5:
      cout << "five" << endl;
      break;
    default:
      cout << "none of above" << endl;
  }

  switch (value) {
    case 1:
      cout << "one" << endl;
      break;
    case 2:
    case 3:
      cout << "two or three" << endl;
    default:
      cout << "others" << endl;
  }

  return 0;
}