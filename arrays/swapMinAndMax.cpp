#include <iostream>
#include <climits>
using namespace std;
// swap the minimum and maximum in an array
void swapMinMax(int arr[], int size, int minValue, int maxValue)
{
    int maxIndex = size - 1;
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == minValue)
        {
            minIndex = i;
        }
        if (arr[i] == maxValue)
        {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);
}

int main()
{
    int arr[] = {20, 3, 0, 5, 12};
    int size = sizeof(arr) / sizeof(int);
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    cout << "original array....." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        minValue = min(arr[i], minValue);
        maxValue = max(arr[i], maxValue);
    }

    swapMinMax(arr, size, minValue, maxValue);

    cout << "after swaping....." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
