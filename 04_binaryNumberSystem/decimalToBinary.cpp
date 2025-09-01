#include <iostream>
using namespace std;

int decToBin(int decNum) {
  int ans = 0;
  int pow = 1;

  while (decNum > 0) {
    int rem = decNum % 2;
    decNum = decNum / 2;
    ans += rem * pow;
    pow = pow * 10;
  }

  return ans;
}

int main() {
  int decNum = 50;
  cout << "binary of " << decNum << " is :" << decToBin(decNum) << endl << endl;

  // decimal to binary from 1 to 10
  for (int i = 0; i <= 10; i++) {
    cout << "binary of " << i << " is :" << decToBin(i) << endl;
  }

  return 0;
}