// BOOK ALLOCATION
// there are N books, each ith book has A[i] number of pages. Allocate book to M students
// max number of pages allocated to a student is minimum
// each book should be allocated to a student
// each student has to be allocated at least one book
// allotment should be in contiguous order
// calculate and return the minimum number

#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> arr, int n, int m, int maxAllowedPages)
{
    int stu = 1, pages = 0; // pages to be allocated in contiguous manner
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
            return false;

        if (pages + arr[i] <= maxAllowedPages)
            pages += arr[i];
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}
int allocateBooks(vector<int> arr, int n, int m)
{
    if (m > n)
        return -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int ans = -1;
    int st = 0, end = sum; // range of possible answers
    // binary search
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        { // go left
            ans = mid;
            end = mid - 1;
        }
        else // right
            st = mid + 1;
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;
    cout << allocateBooks(arr, n, m);
    return 0;
}