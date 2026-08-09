#include <iostream>
#include <iomanip>

int main() {

  float pi_float = 3.1415926535897932385;
  double pi_double = 3.1415926535897932385;

  std::cout << std::fixed << std::setprecision(19); //讓輸出顯示20位數
  std::cout << "correct pi: 3.1415926535897932385" << '\n';
  std::cout << "pi_float  : " << pi_float << '\n';
  std::cout << "pi_double : " << pi_double << '\n';

  return 0;
}


