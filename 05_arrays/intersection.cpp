#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {3, 4, 6, 8, 10};
    int arr2[] = {1, 8, 9, 3};
    int sizeOfarr1 = sizeof(arr1) / sizeof(int);
    int sizeOfarr2 = sizeof(arr2) / sizeof(int);

    for (int i = 0; i < sizeOfarr1; i++)
    {
        for (int j = 0; j < sizeOfarr2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << endl;
            }
        }
    }

    return 0;
}