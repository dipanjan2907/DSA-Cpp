#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> arr, int target,int st, int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid])
        return bs(arr,tar,mid+1,end);
        else if(tar<arr[mid])
        return bs(arr,tar,st,mid-1);
        else
        return mid;
    }
    return -1;
}
int main(){
 //binary search
vector<int> arr={-1,0,3,5,9,12};
int target =9;
int st=0, end=arr.size()-1;
}