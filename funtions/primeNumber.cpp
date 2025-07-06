#include <iostream>
using namespace std;

bool primeNumber(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n = 3;
    bool isPrime = primeNumber(n);

    if (isPrime)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << "not a prime number" << endl;
    }
}