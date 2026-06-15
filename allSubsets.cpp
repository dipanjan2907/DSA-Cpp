#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    {
        for (int val : ans)
            cout << val << " ";
        cout << endl;
        return;
    }

    // include the number
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i + 1);

    ans.pop_back(); // backtrack

    // * if power set and duplicates present
    // int idx = i + 1;
    // while (idx < nums.size() && nums[idx - 1] == nums[idx])
    //     idx++;
    // *

    // exclude
    printSubsets(arr, ans, i + 1);
    // pass idx instead of i+1 when power set reqd
}

int main()
{
    // if duplicates present and you are reqd to return power set, sort the input array first
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    printSubsets(arr, ans, 0);

    return 0;
}
