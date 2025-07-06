#include <iostream>
#include <math.h>
using namespace std;

int binToDec(int binNum)
{
    int exp = 0;
    int base = 2;
    int decNum = 0;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        binNum = binNum / 10;
        int power = pow(base, exp);
        decNum += rem * power;
        exp++;
    }
    return decNum;
}

int main()
{
    int binNum = 100101;

    cout << binToDec(binNum) << endl
         << endl;

      return 0;
}