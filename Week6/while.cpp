#include <iostream>
using namespace std;

int main() {
  int a = 0;

  while (a < 10) {  // 只要 a小於10 就會繼續在這裡面
    cout << "a 現在是 " << a << ", 還是小於10" << endl;
    a++; //大家都喜歡a++  你可以把a++拔掉 他就不會結束
  }

  cout << "a 現在已經離開迴圈了 a現在是 " << a << endl;


  return 0;
}



