#include <iostream>
using namespace std;
int main() {
  int n = 4;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << "*";

    for (int k = 0; k < 2 * i - 1; k++) {
      cout << " ";
    }
    if (i != 0) {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << " ";
    }
    cout << "*";

    for (int k = 0; k < 2 * (n - 1 - i - 1) - 1; k++) {
      cout << " ";
    }

    if (i != n - 2) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}