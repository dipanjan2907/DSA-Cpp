// LEETCODE 46

#include <iostream>
using namespace std;
class Solution
{
public:
    void permutations(vector<vector<int>> &ans, vector<int> &nums, int idx)
    {
        if (idx == nums.size())
        {
            ans.push_back({nums});
            return;
        }
        for (int i = idx; i < nums.size(); i++)
        {
            swap(nums[idx], nums[i]);
            permutations(ans, nums, idx + 1);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        permutations(ans, nums, 0);
        return ans;
    }
};
int main()
{
    vector<int> nums = [ 1, 2, 3 ];
    return 0;
}