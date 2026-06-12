//peak index in mountain array using BS logic
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> arr={0,3,8,9,5,2};
int st=1, end=arr.size()-2;

while(st<=end){
    int mid=st+(end-st)/2;

    if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
    cout<<mid<<endl;
    break;}
    else if(arr[mid-1]<arr[mid])
    st=mid+1;
    else
    end=mid-1;
    }
    return 0;
}