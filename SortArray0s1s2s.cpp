#include <iostream>
#include <vector>
using namespace std;
//brute force using sort() function. O(n log n)
//optimal. O(n) with 2 passes
void sortColors1(vector <int> nums){
    int n=nums.size();
    int count0=0, count1=0, count2=0;
    for (int i=0;i<n;i++){
        if(nums[i]==0) count0++;
        else if(nums[i]==1) count1++;
        else count2++;
    }
    int idx=0;
    for(int i=0;i<count0;i++)
    nums[idx++]=0;
    for(int i=0;i<count1;i++)
    nums[idx++]=1;
    for(int i=0;i<count2;i++)
    nums[idx++]=2;
    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
    cout<<endl;
}

//optimized. O(n) with single pass. O(1)
void sortColors2(vector <int> nums){ //O(n)
    int n=nums.size();
    int low=0, mid=0,  high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++; low++;
        }
        else if(nums[mid]==1)
        mid++;
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
    cout<<endl;
}
    

int main(){
    vector<int> arr={2,0,2,1,1,0};
    sortColors1(arr);
    sortColors2(arr);
    return 0;
}