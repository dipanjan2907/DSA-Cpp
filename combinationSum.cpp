#include <iostream>
using namespace std;
class Solution
{
public:
    set<vector<int>> s;
    void combinations(vector<int> &nums, vector<vector<int>> &ans,
                      vector<int> &combi, int target, int i)
    {

        if (i == nums.size() || target < 0)
            return;

        if (target == 0 && s.find(combi) == s.end())
        {
            ans.push_back({combi});
            s.insert(combi);
            return;
        }
        combi.push_back(nums[i]);
        combinations(nums, ans, combi, target - nums[i], i + 1); // single
        combinations(nums, ans, combi, target - nums[i],
                     i); // multiple

        combi.pop_back();
        combinations(nums, ans, combi, target, i + 1); // exclude
    }
    vector<vector<int>> combinationSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        vector<int> combi;
        combinations(nums, ans, combi, target, 0);
        return ans;
    }
};
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
