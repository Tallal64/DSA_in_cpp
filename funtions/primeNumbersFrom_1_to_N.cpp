#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << i << " " << endl;
        } 
    }

    return 0;
}