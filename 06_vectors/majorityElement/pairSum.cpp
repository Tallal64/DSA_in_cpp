#include <iostream>
#include <vector>
using namespace std;

// using bruteforce approach O(n^2)
vector<int> pairSum(vector<int> arr, int size, int target) {
  vector<int> ans;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == target) {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }
  return ans;
}

// using bruteforce approach but better O(n),
// we'll use two pointers approach because we are given the sorted array
vector<int> pairSum2(vector<int> arr, int size, int target) {
  int st = 0, end = size - 1;
  vector<int> ans;

  while (st < end) {
    int PS = arr[st] + arr[end];
    if (PS > target) {
      end--;
    } else if (PS < target) {
      st++;
    } else {
      ans.push_back(st);
      ans.push_back(end);
      return ans;
    }
  }
  return ans;
}

int main() {
  // must be "sorted" for this specific type of question
  vector<int> arr = {2, 3, 6, 12};
  int size = arr.size();
  int target = 9;
  vector<int> ans = pairSum(arr, size, target);
  vector<int> ans2 = pairSum2(arr, size, target);

  // returning the indices
  cout << ans[0] << " " << ans[1] << endl;
  cout << ans2[0] << " " << ans2[1] << endl;

  return 0;
}