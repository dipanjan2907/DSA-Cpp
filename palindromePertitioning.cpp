#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalin(string s)
    {
        string s1 = s;
        reverse(s1.begin(), s1.end());
        return s == s1;
    }

    void allPartitions(string s, vector<vector<string>> &ans,
                       vector<string> &partitions)
    {

        if (s.size() == 0)
        {
            ans.push_back(partitions);
            return;
        }
        for (int i = 0; i < s.size(); i++)
        {
            string p = s.substr(0, i + 1);
            if (isPalin(p))
            {
                partitions.push_back(p);
                allPartitions(s.substr(i + 1), ans, partitions);
                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> partitions;
        allPartitions(s, ans, partitions);
        return ans;
    }
};
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
