#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &vec) {
  cout << "values: ";
  for (int &i : vec) {
    cout << i << ' ';
  }
  cout << '\n';
}

void print_index(vector<int> &vec) {
  cout << "index:  ";
  for (int i = 0; i < vec.size(); i++) {
    cout << i << ' ';
  }
  cout << '\n';
}

//  iterative binary search, [l, r), returns the smallest index where value[index] >= target
int lower_bound(vector<int> &values, int target) {
  int left = 0, right = values.size();

  while (left < right) {
    int mid = left + (right - left) / 2;

    if (values[mid] == target) {
      right = mid;  //  close up to lower boundary
    } else if (values[mid] < target) {
      left = mid + 1;
    } else if (values[mid] > target) {
      right = mid;
    }
  }

  return left;
}

//  iterative binary search, [l, r), returns the smallest index where values[index] > target
int upper_bound(vector<int> &values, int target) {
  int left = 0, right = values.size();

  while (left < right) {
    int mid = left + (right - left) / 2;

    if (values[mid] == target) {
      left = mid + 1;
    } else if (values[mid] < target) {
      left = mid + 1;
    } else if (values[mid] > target) {
      right = mid;
    }
  }

  return left;
}

int main() {
  vector<int> values = {1, 2, 4, 4, 5, 5, 5, 6};

  print_index(values);
  print_vector(values);

  cout << "binary_search (lower_bound) " << lower_bound(values, 5) << '\n';
  cout << "binary_search (lower_bound) " << lower_bound(values, 3) << '\n';

  cout << "binary_search (upper_bound) " << upper_bound(values, 5) << '\n';
  cout << "binary_search (upper_bound) " << upper_bound(values, 3) << '\n';

  cout << "binary_search (std::lower_bound) " << lower_bound(values.begin(), values.end(), 5) - values.begin() << '\n';
  cout << "binary_search (std::lower_bound) " << lower_bound(values.begin(), values.end(), 3) - values.begin() << '\n';

  cout << "binary_search (std::upper_bound) " << upper_bound(values.begin(), values.end(), 5) - values.begin() << '\n';
  cout << "binary_search (std::upper_bound) " << upper_bound(values.begin(), values.end(), 3) - values.begin() << '\n';

  return 0;
}