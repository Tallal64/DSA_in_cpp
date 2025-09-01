#include <iostream>
using namespace std;
int main() {
  int size = 5;
  /*
    we can also get the size of an array by sizeOf[array]/sizeOfint
    because each element of an array occupy the space as of its data type
    in this case we have int, which is 4 bytes
    so dividing the size of marks[5] which is (4 bytes * 5 elements = 20) => (20
    / 4 = 5)
  */
  // int size = sizeof(marks) / sizeof(int);

  int marks[size] = {78, 23, 43, 99, 12};

  for (int i = 0; i < size; i++) {
    cin >> marks[i];
  }
  cout << endl << endl;

  for (int i = 0; i < size; i++) {
    cout << marks[i] << endl;
  }

  return 0;
}