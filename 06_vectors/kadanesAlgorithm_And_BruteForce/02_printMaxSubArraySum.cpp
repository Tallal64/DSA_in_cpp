/*
    Brute Force Approach for Maximum Subarray Sum

    This approach calculates the maximum sum of any contiguous subarray within a given array.
    It uses nested loops to consider all possible subarrays:

    - The outer loop selects the starting index of the subarray.
    - The middle loop selects the ending index of the subarray.
    - The innermost loop sums the elements between the start and end indices.

    For each subarray, the sum is computed and compared to the current maximum sum.
    The overall time complexity is O(n^3), where n is the size of the array, due to the three nested loops.

    This method is straightforward but inefficient for large arrays.
*/
#include <iostream>
#include <climits>
using namespace std;

/**
 * The maxSubArray function computes the maximum sum of any contiguous subarray
 * within a given integer array arr of size using a brute-force approach
 * with a time complexity of O(n³). It iterates through all possible subarrays, 
 * calculates their sums, and keeps track of the maximum sum encountered.
*/

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

/**
 * The maxSubArray2 function computes the maximum sum of a contiguous subarray within
 * a given integer array using a brute-force approach with a time complexity of O(n²).
 * It iterates through all possible subarrays, calculates their sums,
 * and keeps track of the maximum sum encountered.
*/
int maxSubArray2(int arr[], int size) {
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

    cout<< "brute force approach big of n^3: " <<  maxSubArray(arr,size) << endl;
    cout<< "brute force approach big of n^2: " <<  maxSubArray2(arr,size) << endl;

    return 0;
}