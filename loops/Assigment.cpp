#include <iostream>
using namespace std;
int main()
{
    // *** sum of all numbers form 1 to N which are divisible by 3.
    // int n = 20, sum;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum << endl;

    // *** factorial of N numbers
    int n = 6, sum = 1;

    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << sum << endl;
    return 0;
}