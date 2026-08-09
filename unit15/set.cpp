#include <bits/stdc++.h>
using namespace std;

void find_test_vector() {
  vector<int> v(100);
  iota(v.begin(), v.end(), 1);

  clock_t start_time, end_time;
  start_time = clock();

  for (int i = 0; i <= 100; i++) {
    auto res = find(v.begin(), v.end(), i);
  }

  end_time = clock();
  double time_taken = double(end_time - start_time) / double(CLOCKS_PER_SEC);
  std::cout << "Execution Time (vector): " << std::fixed << time_taken << std::setprecision(6);
  std::cout << " sec" << '\n';
}

void find_test_set() {
  set<int> s;
  for (int i = 1; i <= 100; i++) {
    s.insert(i);
  }

  clock_t start_time, end_time;
  start_time = clock();

  for (int i = 0; i <= 100; i++) {
    auto res = s.find(i);
  }

  end_time = clock();
  double time_taken = double(end_time - start_time) / double(CLOCKS_PER_SEC);
  std::cout << "Execution Time (set): " << std::fixed << time_taken << std::setprecision(6);
  std::cout << " sec" << '\n';
}

void find_test_unordered_set() {
  unordered_set<int> uset;
  for (int i = 1; i <= 100; i++) {
    uset.insert(i);
  }

  clock_t start_time, end_time;
  start_time = clock();

  for (int i = 0; i <= 100; i++) {
    auto res = uset.find(i);
  }

  end_time = clock();
  double time_taken = double(end_time - start_time) / double(CLOCKS_PER_SEC);
  std::cout << "Execution Time (unordered_set): " << std::fixed << time_taken << std::setprecision(6);
  std::cout << " sec" << '\n';
}

int main() {
  set<int> s;
  s.insert(1);
  s.insert(10);
  s.insert(2);
  s.insert(2);

  cout << "s: ";
  for (int i : s) {
    cout << i << " ";
  }
  cout << '\n';

  cout << "s.erase(2);" << '\n';
  s.erase(2);

  cout << "s: ";
  for (int i : s) {
    cout << i << " ";
  }
  cout << '\n';

  if (s.find(1) != s.end()) {
    cout << "1 is in set s" << '\n';
  } else {
    cout << "1 is not in set s" << '\n';
  }

  if (s.find(2) != s.end()) {
    cout << "2 is in set s" << '\n';
  } else {
    cout << "2 is not in set s" << '\n';
  }

  cout << "Number of 1 in set s: " << s.count(1) << '\n';
  cout << "Number of 2 in set s: " << s.count(2) << '\n';

  unordered_set<int> us;
  us.insert(1);
  us.insert(10);
  us.insert(2);
  us.insert(2);

  cout << "us: ";
  for (int i : us) {
    cout << i << " ";
  }
  cout << '\n';

  //  效率比較
  find_test_vector();
  find_test_set();
  find_test_unordered_set();
}