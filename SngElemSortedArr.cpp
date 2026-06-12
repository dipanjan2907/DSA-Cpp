#include <iostream>
using namespace std;

// LEETCODE 540

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int st = 0, end = nums.size() - 1;
        if (nums.size() == 1)
            return nums[0];
        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            // Edge Cases when mid is 0 or last index
            if (mid == 0 && nums[0] != nums[1])
                return nums[mid];
            else if (mid == nums.size() - 1 && nums[nums.size() - 2] != nums[nums.size() - 1])
                return nums[mid];

            // Checking if mid element is single
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
                return nums[mid];

            // Search space
            // if mid is even index and and the prev element matches, then on left of it lies odd number of elements means
            // single element lies there. similar logic applies to others.
            if (mid % 2 == 0)
            {
                if (nums[mid - 1] == nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            else
            {
                if (nums[mid - 1] == nums[mid])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
