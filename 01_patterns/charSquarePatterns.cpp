#include <iostream>
using namespace std;
int main() {

  int n = 4;
  // *** pattern 1
  for (int i = 0; i < n; i++) {
    char ch = 'A';
    for (int j = 0; j < n; j++) {
      cout << ch++;
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 2
  for (int i = 0; i < n; i++) {
    char ch = 'A';
    for (int j = 0; j < i + 1; j++) {
      cout << ch++;
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 3
  char ch = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << ch;
    }
    ch++;
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 4 (reverse triangle of characters)
  // method 1
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j > 0; j--) {
      cout << char('A' + j - 1);
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // method 2
  for (int i = 0; i < n; i++) {
    char ch = 'A' + i;
    for (int j = i + 1; j > 0; j--) {
      cout << ch-- << " ";
    }
    cout << endl;
  }
  cout << "___________" << endl;

  // *** pattern 5 (floyd's triangle)
  char ch3 = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << ch3++;
    }
    cout << endl;
  }
  cout << "___________" << endl;

  return 0;
}