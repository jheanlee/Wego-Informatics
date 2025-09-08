#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "給我一個整數" << endl;
  cin >> number;

  if (number < 3) {
    cout << "比3小" << endl;
  } else if (number > 10 && !(number % 3 == 0)) { //  其實可以簡化成 number > 10 && number % 3 != 0
    cout << "比10大 而且不能被3整除" << endl;
  } else if (number > 10 && (number % 2 == 0 || number % 5 == 0)) {
    cout << "比10大 而且能被3整除 而且(是2的餘數 或是 5的餘數)" << endl;
  } else {
    cout << "上面的都不符合" << endl;
  }

  return 0;

}



