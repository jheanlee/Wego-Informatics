#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(const string &variable_name, vector<T> vec) {
  cout << variable_name << '\n';
  cout << "size(): " << vec.size() << '\n';
  for (int &i : vec) cout << i << ' ';
  cout << "\n\n";
}

int main() {
  vector<int> v1; //  default
  vector<int> v2(30); //  fill (0) (這個不是大小限制，而是fill的數量)
  vector<int> v3(30, -1); //  fill (with value)
  vector<int> v4(v3.begin() + 2, v3.end() - 2); //  range
  vector<int> v5(v3); //  copy
  //  C++11: move, initializer list

  print_vector("v1", v1);
  print_vector("v2", v2);
  print_vector("v3", v3);
  print_vector("v4", v4);
  print_vector("v5", v5);


  cout << "--------------------------------------------------------------------------------\n";

  cout << "v1.empty(): " << v1.empty() << endl;
  cout << "v2.empty(): " << v2.empty() << endl << endl;

  cout << "v1.push_back(1); v1.push_back(2);" << endl << endl;
  v1.push_back(1);
  v1.push_back(2);
  print_vector("v1", v1);

  cout << "v1.pop_back()" << endl << endl;
  v1.pop_back();
  print_vector("v1", v1);

  v1 = {1, 2, 3, 4, 5};
  print_vector("v1", v1);

  cout << "v1[1] = 4;" << endl << endl;
  v1[1] = 4;
  print_vector("v1", v1);

  cout << "--------------------------------------------------------------------------------\n";

  if (find(v1.begin(), v1.end(), 4) != v1.end()) {
    cout << "4 is in [v1.begin(), v1.end())\n";
  } else {
    cout << "4 is not in [v1.begin(), v1.end())\n";
  }

  if (find(v1.begin(), v1.end(), 0) != v1.end()) {
    cout << "0 is in [v1.begin(), v1.end())\n";
  } else {
    cout << "0 is not in [v1.begin(), v1.end())\n";
  }

  cout << "sort(v1.begin(), v1.end())\n";
  sort(v1.begin(), v1.end());
  print_vector("v1", v1);

  cout << "reverse(v1.begin(), v1.end())\n";
  reverse(v1.begin(), v1.end());
  print_vector("v1", v1);

  return 0;
}