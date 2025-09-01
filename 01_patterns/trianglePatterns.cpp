#include <iostream>
using namespace std;
int main() {
  int n = 4;
  // *** pattern 1
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 2
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << i + 1;
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 3
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i + 1; j++) {
      cout << j;
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 4 (reverse triangle of numbers)
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j > 0; j--) {
      cout << j;
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 5 (floyd's triangle)
  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << num++;
    }
    cout << endl;
  }
  cout << "___________" << endl;

  for (int i = 1; i < n; i++) {
    char ch = 'A' + i;
    for (int j = i; j > 0; j--) {
      cout << char(ch - j);
    }
    cout << endl;
  }

  return 0;
}