#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans(size, -1);
        stack<int> s;
        for (int i = 2 * size - 1; i >= 0; i--)
        {
            while (s.size() > 0 && nums[s.top()] <= nums[i % size])
                s.pop();
            ans[i % size] = s.empty() ? -1 : nums[s.top()];
            s.push(i % size);
        }
        return ans;
    }
};
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
