#include <iostream>
#include <vector>
using namespace std;
int main(){
 //binary search
vector<int> arr={-1,0,3,5,9,12};
int target =9;
int st=0, end=arr.size()-1;
while(st<=end){
    int mid=st+(end-st)/2;
    if(target>arr[mid])
    st=mid+1; //second half
    else if(target<arr[mid])
    st=mid-1;
    else{
    cout<<"Index= "<<mid;
    break;}
}
}