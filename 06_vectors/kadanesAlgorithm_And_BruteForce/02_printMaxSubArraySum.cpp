#include <iostream>
#include <climits>
using namespace std;

int maxSubArray(int arr[], int size) {
    int MaxSum = INT_MIN;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            int currSum = 0;
            for (int k = i; k <= j; k++) {
                currSum = currSum + arr[k];
            }
            MaxSum = max(currSum, MaxSum);
        }
    }
    return MaxSum;
}
 
int maxSubArrayUsingBruteForceApproach(int arr[], int size) {
    int MaxSum = INT_MIN;
    for (int i = 0; i < size; i++) {
        int currSum = 0;
        for (int j = i; j < size; j++) {
            currSum = currSum + arr[j];
            MaxSum = max(currSum, MaxSum);
        }
    }
    return MaxSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout<< "simple approach: " <<  maxSubArray(arr,size) << endl;
    cout<< "brute force approach: " <<  maxSubArrayUsingBruteForceApproach(arr,size) << endl;

    return 0;
}