#include <iostream>
using namespace std;
int main() {
  int n = 4;
  // *** patterns 1
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << j;
    }
    cout << endl;
  }

  // *** pattern 2
  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << num++;
    }
    cout << endl;
  }

  return 0;
}