//
// Created by Jhean Lee on 2025/6/8.
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

class UnionFind {
private:
  int m_count;
  vector<int> m_parents;
public:
  UnionFind(int _count) {
    this->m_count = _count;
    this->m_parents = vector<int>(_count);
    iota(m_parents.begin(), m_parents.end(), 0);
  }

  int root(int _idx) {
    if (m_parents[_idx] != _idx) {
      m_parents[_idx] = root(m_parents[_idx]);
    }

    return m_parents[_idx];
  }

  void connect(int _lhs, int _rhs) {
    int rootl = root(_lhs), rootr = root(_rhs);
    if (rootl == rootr) return;
    m_parents[rootl] = rootr;
    m_count--;
  }

  bool is_connected(int _lhs, int _rhs) {
    return root(_lhs) == root(_rhs);
  }

  int count() {
    return this->m_count;
  }
};

int main() {
  fastio

  int n, m;
  cin >> n >> m;

  UnionFind uf(n);
  int cnt = 0;

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    if (uf.is_connected(u, v)) {
      cnt++;
    } else {
      uf.connect(u, v);
    }
  }

  cout << cnt << endl;

  return 0;
}