#include <bits/stdc++.h>
using namespace std;

int basic_fib(int n) {
  if (n <= 1) return n;
  return basic_fib(n - 1) + basic_fib(n - 2);
}

int memo_fib(int n, vector<int> &memo) {
  if (n <= 1) return n;
  if (memo[n] != -1) return memo[n];
  memo[n] = basic_fib(n - 1) + basic_fib(n - 2);
  return memo[n];
}

int bottom_up_fib(int n) {
  vector<int> dp(n + 1);

  //  初始條件
  dp[0] = 0;
  dp[1] = 1;

  //  開始迭代
  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[n];
}

int bottom_up_optimised_fib(int n) {
  if (n <= 1) return n;

  int prev = 0; int curr = 1;
  for (int i = 2; i <= n; i++) {
    int tmp = prev + curr;
    prev = curr;
    curr = tmp;
  }

  return curr;
}

int main() {
  cout << basic_fib(8) << '\n';

  vector<int> memo(9, -1);
  cout << memo_fib(8, memo) << '\n';

  cout << bottom_up_fib(8) << '\n';

  cout << bottom_up_optimised_fib(8) << '\n';
  return 0;
}