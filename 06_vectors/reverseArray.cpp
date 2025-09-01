#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &vec) {
  int start = 0, end = vec.size() - 1;
  while (start < end) {
    swap(vec[start], vec[end]);
    start++;
    end--;
  }
}

int main() {
  vector<int> vec = {1, 2, 3, 4, 5};
  reverseArray(vec);

  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}