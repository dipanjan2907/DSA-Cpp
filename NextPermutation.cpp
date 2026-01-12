//NEXT PERMUTATION
//O(1), O(n)
//1. find pivot A[i]<A[i+1]
//2. find right most element>pivot, swap
//3. Reverse (pivot+1) to (n-1)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPerm(vector<int> A){
    //find pivot
    int pivot=-1, n=A.size();
    for (int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
    reverse(A.begin(),A.end()); //inplace changes
    return;}
    //next larger element
    for(int i=n-1;i>pivot;i--){
    if(A[i]>A[pivot]){
        swap(A[i],A[pivot]);
        break;
    }}
    //reverse elements
    int i=pivot+1,j=n-1;
    // reverse(A.begin()+pivot+1,A.end());
    while(i<=j){
        swap(A[i++],A[j--]);
    }

    for (int i=0;i<n;i++)
    cout<<A[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int> nums={1,2,3,5,4};//{1,2,4,5,3};
    // cout<<next_permutation(nums.begin(),nums.end());
    nextPerm(nums);
    return 0;
}