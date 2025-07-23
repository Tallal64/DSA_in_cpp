#include <iostream>
using namespace std;
int main()
{
    // *** check if the given number is prime or not
    
    // ^^^ METHOD-1
    // int n;
    // bool isPrime = true;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 2; i < n - 1; i++) // can also be done with "i*i<=n'
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime)
    // {
    //     cout << n << " is a prime number" << endl;
    // }
    // else
    // {
    //     cout << n << " is not a prime number" << endl;
    // }

    // ^^^ METHOD-2
    int n;
    bool isPrime = true;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    (isPrime) ? cout << "prime number" << endl : cout << "non prime" << endl;
    
    return 0;
}