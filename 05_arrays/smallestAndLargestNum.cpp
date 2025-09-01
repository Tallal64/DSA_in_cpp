#include <climits>
#include <iostream>
using namespace std;
int main() {
  int size = 6;
  int arr[] = {12, 5, 15, 0, -15, 24};
  // >>>>>>>>> for finding the smallest number in the array
  int smallest = INT_MAX; // largest possible value

  for (int i = 0; i < size; i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
    }

    // this will give the same result as the above snippet
    // smallest = min(arr[i], smallest);
  }
  cout << "smallest number is : " << smallest << endl;
  cout << endl;

  // >>>>>>>>> for finding the largest number in the array
  int largest = INT_MIN; // smallest possible value

  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }

    // >>> this will give the same result as the above snippet
    // largest = max(arr[i], smallest);
  }
  cout << "largest number is : " << largest << endl;
}