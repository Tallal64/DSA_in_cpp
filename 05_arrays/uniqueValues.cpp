#include <iostream>
using namespace std;

int main()
{

    int arr[] = {23, 48, 9, 23, 48, 1};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count < 2)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}