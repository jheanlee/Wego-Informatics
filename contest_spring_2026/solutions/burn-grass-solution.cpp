//
// Created by Jhean Lee on 2026/5/16.
//

#if defined(__GNUG__) && !defined(__llvm__)
  #include <bits/stdc++.h>
#else
// C
  #ifndef _GLIBCXX_NO_ASSERT
  #include <cassert>
  #endif
  #include <cctype>
  #include <cerrno>
  #include <cfloat>
  #include <ciso646>
  #include <climits>
  #include <clocale>
  #include <cmath>
  #include <csetjmp>
  #include <csignal>
  #include <cstdarg>
  #include <cstddef>
  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <ctime>

  #if __cplusplus >= 201103L
  #include <ccomplex>
  #include <cfenv>
  #include <cinttypes>
  #include <cstdbool>
  #include <cstdint>
  #include <ctgmath>
  #include <cwchar>
  #include <cwctype>
  #endif

  // C++
  #include <algorithm>
  #include <bitset>
  #include <complex>
  #include <deque>
  #include <exception>
  #include <fstream>
  #include <functional>
  #include <iomanip>
  #include <ios>
  #include <iosfwd>
  #include <iostream>
  #include <istream>
  #include <iterator>
  #include <limits>
  #include <list>
  #include <locale>
  #include <map>
  #include <memory>
  #include <new>
  #include <numeric>
  #include <ostream>
  #include <queue>
  #include <set>
  #include <sstream>
  #include <stack>
  #include <stdexcept>
  #include <streambuf>
  #include <string>
  #include <typeinfo>
  #include <utility>
  #include <valarray>
  #include <vector>

  #if __cplusplus >= 201103L
  #include <array>
  #include <atomic>
  #include <chrono>
  #include <condition_variable>
  #include <forward_list>
  #include <future>
  #include <initializer_list>
  #include <mutex>
  #include <random>
  #include <ratio>
  #include <regex>
  #include <scoped_allocator>
  #include <system_error>
  #include <thread>
  #include <tuple>
  #include <typeindex>
  #include <type_traits>
  #include <unordered_map>
  #include <unordered_set>
  #endif
#endif

#define endl '\n'

using namespace std;

#define fastio                 \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

int n, m;
vector<vector<char>> g;

bool burn(int i, int j) {
  if (i < 0 || i >= n || j < 0 || j >= m) return false;

  bool tree = false;

  switch (g[i][j]) {
  case '.':
    return false;
  case 'w':
    break;
  case 't':
    tree = true;
    break;
  default:
    //  unreachable
    return false;
  }

  g[i][j] = '.';

  //  use bitwise false to avoid short-circuiting
  //  example: true || not_evaluated(), true | evaluated()
  return tree | burn(i - 1, j) | burn(i + 1, j) | burn(i, j - 1) | burn(i, j + 1);
}

int main() {
  fastio

  cin >> n >> m;

  g = vector<vector<char>>(n, vector<char>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char tmp;
      cin >> tmp;
      g[i][j] = tmp;
    }
  }

  int set_fire_count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (g[i][j] == 'w') {
        set_fire_count++;
        set_fire_count -= burn(i, j);
      }
    }
  }

  cout << set_fire_count << '\n';

  return 0;
}