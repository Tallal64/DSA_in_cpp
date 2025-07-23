#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // char ch = 'A'; // (for character version)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for (int k = 0; k < n - i; k++) // method 1
        for (int k = i; k < n; k++) // method 2
        {
            // cout << ch; // (for character version)
            cout << i + 1;
        }
        // ch++; // (for character version)
        cout << endl;
    }

    return 0;
}