#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxSubArrayKadaneAlgorithm(vector<int>vec, int size) {
    int MaxSum = INT_MIN;
    int currSum = 0;
    
    for (int val : vec) {
        currSum += val;
        MaxSum = max(currSum, MaxSum);

        if (currSum < 0) {
            currSum = 0;
        }
     }
     return MaxSum; 
}

int main() {
    vector<int> vec={1,2,3,4,5} ;
    int size = vec.size();

    cout << "kadane's algorithm: " << maxSubArrayKadaneAlgorithm(vec, size) << endl;

    return 0;
}