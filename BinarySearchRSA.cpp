#include <iostream>
#include <vector>
using namespace std;
int main(){
//binary search in rotated sorted array
vector<int> arr={-1,0,3,5,9,12};
int target =9;
int st=0, end=arr.size()-1;
while(st<=end)
{
    int mid=st+(end-st)/2;
    if(arr[mid]==target)
    cout<<mid<<endl;
    //left sorted
    if(arr[st]<=arr[mid]){
        if(arr[st]<=target && target<=arr[mid])
        end=mid-1;
        else
        st=mid+1;
    }
    //right sorted
    else{
        if(arr[mid]<=target && target<=arr[end])
        st=mid+1;
        else
        end=mid-1;
    }
    }
return 0;
}