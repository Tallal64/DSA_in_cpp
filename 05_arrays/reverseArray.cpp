#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    // two pointers approach
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    reverseArray(arr, size); // array is reversed bcz it is "passed by ref"

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}