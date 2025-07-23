#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> vec;             // initialize
    vector<int> vec = {1, 2, 3}; // declare
    vector<char> vovels = {'a', 'e', 'i', 'o', 'u'};
    // vector<int> vec(5, 0);       // (size, each_index_value)

    cout << vec[0] << endl;

    // for each loop
    for (int val : vec)
    {
        cout << val << endl;
    }

    for (char chars : vovels)
    {
        cout << chars << " ";
    }
    cout << endl;
    return 0;
}