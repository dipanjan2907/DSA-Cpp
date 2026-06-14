// using Binary Search (hint: sorted)
// O(log(m*n))
#include <iostream>
using namespace std;
bool searchInRow(int matrix, int target, int row)
{
    int n = matrix[0].size(); // cols
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == matrix[row][mid])
        {
            return true;
        }
        else if (target > matrix[row][mid])
        {
            st = mid + 1;
        }
        else
            end = mid - 1;
    }
    return false;
}
bool searchMatrix(vector matrix, int target)
{
    // BS on total no of rows
    int m = matrix.size(), n = matrix[0].size();
    int startRow = 0, endRow = m - 1;
    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
        {
            return searchInRow(matrix, target, midRow);
        }
        else if (target >= mat[midRow][n - 1])
        {
            startRow = midRow + 1;
        }
        else
            endRow = midRow - 1
    }
    return false;
}
int main()
{
    return 0;
}

// approach II, O(m+n)
//  int m=mat.size(),n=mat[0].size();
//  int r=0,c=n-1;
//  while(r<m && c>=0){
//      if(tar==mat[r][c])
//      return true;
//      else if(tar<mat[r][c])
//      c--;
//      else
//      r++;
//  }
//  return false;

// I
// class Solution {
// public:
//     bool searchInRow(vector<vector<int>>& matrix, int target, int row,
//                      int col) {
//         int st = 0, end = col-1, mid;
//         while (st <= end) {
//             mid = st + (end - st) / 2;
//             if (matrix[row][mid] == target)
//                 return true;
//             else if (matrix[row][mid] > target)
//                 end = mid - 1;
//             else
//                 st = mid + 1;
//         }
//         return false;
//     }

//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int r = matrix.size(), c = matrix[0].size();
//         int lr = 0, hr = r - 1, mid;

//         while (lr <= hr) {
//             mid = lr + (hr - lr) / 2;

//             if (target >= matrix[mid][0] && target <= matrix[mid][c - 1])
//                 return searchInRow(matrix, target, mid, c);
//             else if (target >= matrix[mid][c - 1])
//                 lr = mid + 1;
//             else
//                 hr = mid - 1;
//         }
//         return false;
//     }
// };

// II
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int r=matrix.size(),c=matrix[0].size();
//         int m=0,n=c-1;
//         while(m<r && n>=0){
//             if(matrix[m][n]==target)
//             return true;
//             else if(matrix[m][n]>target)
//             c--;
//             else
//             r++;
//         }
//         return false;
//     }
// };