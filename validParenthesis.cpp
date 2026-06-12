#include <iostream>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
                stk.push(ch);

            else
            {
                if (stk.empty())
                    return false;

                if (ch == ')' && stk.top() == '(')
                    stk.pop();
                else if (ch == '}' && stk.top() == '{')
                    stk.pop();
                else if (ch == ']' && stk.top() == '[')
                    stk.pop();
                else
                    return false;
            }
        }
        return stk.empty();
    }
};
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
