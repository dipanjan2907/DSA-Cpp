#include <iostream>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int size = height.size();
        int ans = 0, l = 0, r = size - 1, lmax = 0, rmax = 0;
        while (l < r)
        {
            lmax = max(lmax, height[l]);
            rmax = max(rmax, height[r]);

            if (lmax < rmax)
            {
                ans += lmax - height[l];
                l++;
            }
            else
            {
                ans += rmax - height[r];
                r--;
            }
        }
        return ans;
    }
};
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
