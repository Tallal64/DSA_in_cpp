#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int a = 0, b = 1;
    int fnum;

    cout << 0 << " " << 1 << " ";
    for (int i = 0; i <= n; i++)
    {
        fnum = a + b;
        a = b;
        b = fnum;
        cout << fnum << " ";
    }

    return 0;
}