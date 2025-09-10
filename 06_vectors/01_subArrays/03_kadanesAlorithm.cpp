/**
 * Kadane's Algorithm:
 * -------------------
 * Kadane's Algorithm is an efficient method to find the maximum sum of a
 * contiguous subarray within a one-dimensional array of numbers. It operates in
 * linear time O(n).
 *
 * The algorithm works by iterating through the array, maintaining two
 * variables:
 * - currSum: The sum of the current subarray being considered.
 * - MaxSum: The maximum sum found so far.
 *
 * At each step, the current element is added to currSum. If currSum becomes
 * negative, it is reset to zero, as any subarray starting before this point
 * would not contribute to a maximum sum. MaxSum is updated whenever currSum
 * exceeds its current value.
 *
 * This approach ensures that the maximum possible sum of any contiguous
 * subarray is found efficiently, without the need for nested loops.
 */
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int maxSubArrayKadaneAlgorithm(vector<int> vec, int size) {
  int MaxSum = INT_MIN;
  int currSum = 0;

  for (int val : vec) {
    currSum += val;
    MaxSum = max(currSum, MaxSum);

    // if (currSum < 0) {
    //   currSum = 0;
    // }
    currSum = currSum < 0 ? 0 : currSum;
  }
  return MaxSum;
}

int main() {
  vector<int> vec = {-5, -2, -11, -8};
  // vector<int> vec = {1, 2, 3, 4, 5};

  int size = vec.size();

  cout << "kadane's algorithm: " << maxSubArrayKadaneAlgorithm(vec, size)
       << endl;

  return 0;
}