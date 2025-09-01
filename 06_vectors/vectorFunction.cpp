#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;
  cout << vec.size() << endl;
  vec.push_back(34);
  vec.push_back(23);
  vec.push_back(63);

  // after push_back
  cout << vec.size() << endl;

  vec.pop_back(); // will remove 63

  // after pop_back
  cout << vec.size() << endl;

  for (auto val : vec) {
    cout << val << " ";
  }

  cout << endl;

  cout << vec.front() << endl;
  cout << vec.back() << endl;
  cout << vec.at(1) << endl;

  return 0;
}