//single element in sorted array
//L & R EVEN NO OF ELEMENTS, mid always even.
//if not in mid, then 
//if right of mid has even elements, then single element must be
//in left half, cuz perfect duplicates always have even no of elements
//so the single one must be on the side making odd
//if L&R odd, if [mid-1]=[mid], element must be on R, cuz those 2 already made pairs

#include <iostream>
#include <vector>
using namespace std;
int singleNonDuplicate(vector<int>arr)
{
    int n=arr.size();
    if(n==1)    return arr[0];
    int st=0, end=n-1;
    while (st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && arr[0]!=arr[1]) return arr[mid];
        if(mid==n-1 && arr[n-1]!=arr[n-2]) return arr[mid];
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]) return arr[mid];
        if(mid%2==0){ //even
            if(arr[mid-1]==arr[mid]) //left
            end=mid-1;
            else //right
            st=mid+1;
        }
        else{ //odd
            if(arr[mid-1]==arr[mid]) //right
            st=mid+1;
            else //left
            end=mid-1;
        } 
    }
    return -1;
}
int main(){
    vector<int> nums={1,1,2,3,3,4,4,8,8}; //always odd
    cout<< singleNonDuplicate(nums);
    return 0;
}