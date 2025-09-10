#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// majority element by brute force (naive approach) on an unsorted vector and
// it's time complexity is O(n^2)
int majorityElement(vector<int> nums, int n) {
  int MJE;
  for (int val : nums) {
    int frequency = 0;
    for (int element : nums) {
      if (element == val) {
        frequency++;
      }
    }
    if (frequency > n / 2) {
      MJE = val;
    }
  }
  return MJE;
}

// majority element by brute force on an unsorted vector (optimize approach) and
// it's time complexity is O(n)
int majorityElementOptimize(vector<int> nums, int n) {
  int frequency = 1;
  int MJE = nums[0];

  // sorting the array
  sort(nums.begin(), nums.end());

  for (int i = 1; i < n; i++) {
    if (nums[i] == nums[i - 1]) {
      frequency++;
    } else {
      frequency = 1;
    }
    if (frequency > n / 2) {
      MJE = nums[i];
    }
  }
  return MJE;
}

int main() {
  // assume that majority element is always present in the array
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // unsorted vector
  int n = nums.size();

  int majorityElementAns = majorityElement(nums, n);                 // O(n^2)
  int majorityElementOptimizeAns = majorityElementOptimize(nums, n); // O(n)

  cout << majorityElementAns << endl;
  cout << majorityElementOptimizeAns << endl;

  return 0;
}
