#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(vector<T> vec) {
  cout << "size(): " << vec.size() << endl;
  for (int &i : vec) cout << i << ' ';
  cout << endl;
}

int main() {
  vector<int> v1; //  default
  vector<int> v2(30); //  fill (0) (這個不是大小限制，而是fill的數量)
  vector<int> v3(30, -1); //  fill (with value)
  vector<int> v4(v3.begin() + 2, v3.end() - 2); //  range
  vector<int> v5(v3); //  copy
  //  C++11: move, initializer list

  cout << "v1" << endl;
  print_vector(v1);

  cout << "v2" << endl;
  print_vector(v2);

  cout << "v3" << endl;
  print_vector(v3);

  cout << "v4" << endl;
  print_vector(v4);

  cout << "v5" << endl;
  print_vector(v5);

  cout << "--------------------------------------------------------------------------------\n";

  cout << "v1.empty(): " << v1.empty() << endl;
  cout << "v2.empty(): " << v2.empty() << endl << endl;

  cout << "v1.push_back(1); v1.push_back(2);" << endl << endl;
  v1.push_back(1);
  v1.push_back(2);
  cout << "v1: " << endl;
  print_vector(v1);
  cout << endl;

  cout << "v1.pop_back()" << endl << endl;
  v1.pop_back();
  cout << "v1: " << endl;
  print_vector(v1);
  cout << endl;

  v1 = {1, 2, 3, 4, 5};
  cout << "v1: " << endl;
  print_vector(v1);
  cout << endl;

  cout << "v1[2] = 2;" << endl << endl;

  v1[2] = 2;
  cout << "v1: " << endl;
  print_vector(v1);
  cout << endl;



}