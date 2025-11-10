#include <iostream>

int gcd_recursive(int n, int m) {
  if (n < m) return gcd_recursive(m, n);
  if (m == 0) return n;

  return gcd_recursive(m, n % m);
}

int gcd_iterative(int n, int m) {
  int tmp = 1;

  if (n < m) std::swap(n, m);

  while (tmp != 0) {
    tmp = m % n;
    m = n;
    n = tmp;
  }

  return m;
}
