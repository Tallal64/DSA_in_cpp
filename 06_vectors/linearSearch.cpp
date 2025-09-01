#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int num) {
  int index = 0;
  for (int i = 0; i < vec.size(); i++) {
    if (num == vec.at(i)) {
      index = i;
    } else {
      index = -1;
    }
  }
  return index;
}

int main() {
  int num = 0;
  vector<int> vec = {5, 8, 10, 1, 6};
  cout << linearSearch(vec, num) << endl;

  return 0;
}