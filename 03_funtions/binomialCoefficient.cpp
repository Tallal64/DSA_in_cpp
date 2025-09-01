#include <iostream>
using namespace std;

int factorial(int num) {
  int factNum = 1;
  for (int i = 1; i <= num; i++) {
    factNum *= i;
  }
  return factNum;
}

int nCrFuntion(int n, int r) {
  int nFact = factorial(n);
  int rFact = factorial(r);
  int n_minus_r_Fact = factorial(n - r);

  int nCr = nFact / (rFact * n_minus_r_Fact); // formula of binomial_Coefficient

  return nCr;
}

int main() {
  int n = 8;
  int r = 2;
  cout << nCrFuntion(n, r) << endl;
  return 0;
}