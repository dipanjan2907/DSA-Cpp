//2d Array or Matrix
//index starts with 0 like array
#include <iostream>
using namespace std;
bool LinearSearch(int mat[][2],int rows,int cols,int key){
    for(int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++){
            if(mat[i][j]==key){
                return true;
            }
        }

    }
    return false;
}
//do maxRowSum and maxColumnSum on your own

int diagonalSum(int sqmat[][3],int n){
    int sum=0;
    //O(n^2)
    // for(int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         if(i==j)
    //         sum+=mat[i][j];
    //         else if(j==n-i-1)
    //         sum+=mat[i][j];
    //     }
    // }

    //O(n)
    for(int i=0;i<n;i++){
        sum+=sqmat[i][i];
        if(i!=n-i-1){
            sum+=sqmat[i][n-i-1];
        }
    }
    return sum;
}
int main()
{
    int matrix[3][2]={{1,2},{3,4},{5,6}};
    int rows=3;
    int cols=2;
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    //rows=> mat.size()
    //cols=> mat[i].size()
    //use vectors for dynamic sizing
    //vector <vector<int>> mat={{},{}}....
    cout<<LinearSearch(matrix,rows,cols,8)<<endl;
    int sqmat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<diagonalSum(sqmat,n)<<endl;
    return 0;
}
