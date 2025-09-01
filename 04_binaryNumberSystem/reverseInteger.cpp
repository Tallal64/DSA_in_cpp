#include <iostream>
using namespace std;
int main()
// write a a code to reverse and integer
{
  int n = 762, rem;
  int reverseNum = 0;
  while (n > 0) {
    rem = n % 10;
    n = n / 10;
    reverseNum = reverseNum * 10 + rem;
  }
  cout << reverseNum << endl;
  return 0;
}