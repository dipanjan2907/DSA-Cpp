#include <iostream>
#include <limits>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1.0;
        if (x == 0.0)
            return 0.0;
        if (x == 1.0)
            return 1.0;
        if (x == -1.0)
            return (n % 2 == 0) ? 1.0 : -1.0;

        long power = n;
        if (power < 0)
        {
            x = 1.0 / x;
            power = -power;
        }

        double ans = 1.0;

        while (power > 0)
        {
            if (power & 1)
                ans *= x;
            x *= x;
            power >>= 1;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.myPow(2, 10) << endl;
    return 0;
}