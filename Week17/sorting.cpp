#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> &v) {
  for (int i : v) {
    cout << i << " ";
  }
  cout << '\n';
}

///     Selection Sort
///     Time: Ω(n^2)/Θ(n^2)/O(n^2)
///     Memory: Ω(1)/Θ(1)/O(1)
void selection_sort(vector<int> &elements) {
  for (int i = 0; i < elements.size() - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < elements.size(); j++) {
      if (elements[j] < elements[min_index]) {
        min_index = j;
      }
    }

    swap(elements[i], elements[min_index]);
  }
}

///     Bubble Sort
///     Time: Ω(n)/Θ(n^2)/O(n^2)
///     Memory: Ω(1)/Θ(1)/O(1)
void bubble_sort(vector<int> &elements) {
  for (int i = 0; i < elements.size() - 1; i++) {
    bool flag_done = true;
    for (int j = 0; j < elements.size() - i - 1; j++) {
      if (elements[j] >= elements[j + 1]) {
        flag_done = false;
        swap(elements[j], elements[j + 1]);
      }
    }

    if (flag_done) break;
  }
}

///     Merge Sort
///     Time: Ω(n log n)/Θ(n log n)/O(n log n)
///     Memory: Ω(n)/Θ(n)/O(n)
///     in-place: no
void merge(vector<int> &elements, int l1, int r1, int l2, int r2) {
  int l1o = l1, r2o = r2;
  vector<int> tmp;
  while (l1 <= r1 && l2 <= r2) {
    if (elements[l1] <= elements[l2]) {
      tmp.push_back(elements[l1]);
      l1++;
    } else {
      tmp.push_back(elements[l2]);
      l2++;
    }
  }
  while (l1 <= r1) {
    tmp.push_back(elements[l1]);
    l1++;
  }
  while (l2 <= r2) {
    tmp.push_back(elements[l2]);
    l2++;
  }

  for (int i = 0; i < r2o - l1o + 1; i++) {
    elements[l1o + i] = tmp[i];
  }
}

void merge_sort(vector<int> &elements, int lhs, int rhs) {
  if (lhs >= rhs) {
    return;
  }

  int mid = lhs + (rhs - lhs) / 2;
  merge_sort(elements, lhs, mid);
  merge_sort(elements, mid + 1, rhs);
  merge(elements, lhs, mid, mid + 1, rhs);
}

///     QuickSort
///     Time: Ω(n log n)/Θ(n log n)/O(n^2)
///     Memory: Ω(log n)/Θ(log n)/O(n) (O(1) extra space + Θ(log n)/O(n) recursive stack)
///     stable: No

int quick_sort_partition(vector<int> &elements, int lhs, int rhs) {
  int piv = elements[rhs];

  int p = lhs - 1;

  for (int q = lhs; q <= rhs - 1; q++) {
    if (elements[q] < piv) {
      p++;
      swap(elements[p], elements[q]);
    }
  }

  swap(elements[p + 1], elements[rhs]);
  return p + 1;
}

void quick_sort(vector<int> &elements, int lhs, int rhs) {
  if (lhs < rhs) {
    int piv = quick_sort_partition(elements, lhs, rhs);
    quick_sort(elements, lhs, piv - 1);
    quick_sort(elements, piv + 1, rhs);
  }
}

int main() {
  cout << "original: \n";
  vector<int> elements{5, 2, 3, 4, 2, 1};
  print_vec(elements);

  cout << "selection sort: \n";
  vector<int> selection_elements(elements);
  selection_sort(selection_elements);
  print_vec(selection_elements);

  cout << "bubble sort: \n";
  vector<int> bubble_elements(elements);
  bubble_sort(bubble_elements);
  print_vec(bubble_elements);

  cout << "merge sort: \n";
  vector<int> merge_elements(elements);
  merge_sort(merge_elements, 0, merge_elements.size() - 1);
  print_vec(merge_elements);

  cout << "quicksort: \n";
  vector<int> quick_elements(elements);
  merge_sort(quick_elements, 0, quick_elements.size() - 1);
  print_vec(quick_elements);

  return 0;
}