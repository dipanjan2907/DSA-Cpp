#include <iostream>
#include <vector>
// let A=[1,2,3,0,0,0] and swap B with zero. 0's are xtra.
using namespace std;
void merge(vector<int> A, int m, vector<int> B, int n)
{ // O(1), O(m+n)
    int idx = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
            A[idx--] = A[i--];
        else
            A[idx--] = B[j--];
    }
    while (j >= 0)
        A[idx--] = B[j--];
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << " ";
    for (int i = 0; i < B.size(); i++)
        cout << B[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 5, 6};
    int m = 3, n = 3;
    merge(A, m, B, n);
    return 0;
}