// LEETCODE 443
#include <iostream>
using namespace std;
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            char ch = chars[i];
            int count = 0;
            while (i < n && chars[i] == ch)
            {
                count++;
                i++;
            }

            if (count == 1)
                chars[idx++] = ch;
            else
            {
                chars[idx++] = ch;
                for (char dig : to_string(count))
                    chars[idx++] = dig;
            }
            i--;
        }

        chars.resize(idx);
        return idx;
    }
};
int main()
{
    chars = [ "a", "a", "b", "b", "c", "c", "c" ];
    return 0;
}
