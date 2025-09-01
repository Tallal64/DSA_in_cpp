#include <climits>
#include <iostream>

using namespace std;
int main() {
  int size = 6;
  int arr[] = {12, 5, 15, 0, -15, 24};
  int smallest = INT_MAX;
  int index;

  for (int i = 0; i < size; i++) {
    smallest = min(arr[i], smallest);
    if (smallest == arr[i]) {
      index = i;
    }
  }
  cout << "smallest number is : " << smallest << endl;
  cout << "index of smallest number is : " << index << endl;
  return 0;
}