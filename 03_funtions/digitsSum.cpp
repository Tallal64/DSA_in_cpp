#include <iostream>
using namespace std;

int sumOfDigit(int num) {
  int lastDigit, digitSum = 0;
  while (num > 0) {
    lastDigit = num % 10;
    num = num / 10;
    digitSum += lastDigit;
  }
  return digitSum;
}

int main() {
  int num = 145;
  cout << sumOfDigit(num) << endl;

  return 0;
}