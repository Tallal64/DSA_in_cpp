#include <iostream>
#include <vector>
using namespace std;

// moore's voting algorithm to find the majority element in an array without
// using of "n/2" time complexity is O(n)
int majorityElement(vector<int> nums, int n) {
  int freq = 0;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    if (freq == 0) {
      ans = nums[i];
    }
    if (nums[i] == ans) {
      freq++;
    } else {
      freq--;
    }
  }
  return ans;
}

int main() {
  // assume that majority element is always present in the array
  vector<int> nums = {1, 2, 2, 1, 1, 1};
  int n = nums.size();

  int ans = majorityElement(nums, n);
  cout << ans << endl;
  return 0;
}