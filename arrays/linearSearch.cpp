#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1; // NOT FOUND
}

int main()
{
    int arr[] = {12, 2, 43, 1, 6, 0};
    int target = 43;
    int size = 6;
    cout << "index of " << target << " is : " << linearSearch(arr, target, size) << endl;

    return 0;
}