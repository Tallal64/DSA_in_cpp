#include <iostream>
using namespace std;

// sum & product of all numbers in an array

int sum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int product(int arr[], int size) {
  int product = 1;
  for (int i = 0; i < size; i++) {
    product = product * arr[i];
  }
  return product;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  cout << sum(arr, size) << endl;
  cout << product(arr, size) << endl;

  return 0;
}