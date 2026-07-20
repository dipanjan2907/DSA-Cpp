#include <iostream>
using namespace std;
class Solution
{
public:
    int celebrity(vector<vector<int>> &mat)
    {
        int size = mat.size();
        stack<int> s;
        for (int i = 0; i < size; i++)
        {
            s.push(i);
        }

        while (s.size() > 1)
        {
            int i = s.top();
            s.pop();

            int j = s.top();
            s.pop();

            if (mat[i][j] == 0)
                s.push(i);
            else
                s.push(j);
        }

        int celeb = s.top();
        for (int i = 0; i < size; i++)
        {
            if ((i != celeb) && (mat[i][celeb] == 0 || mat[celeb][i]))
                return -1;
        }
        return celeb;
    }
};

int main()
{
}