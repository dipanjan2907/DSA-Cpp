#include <iostream>
#include <vector>
using namespace std;
int main(){
    //brute force
    vector <int> nums={1,2,3,4};
    vector <int> ans(nums.size());
    // for (int i=0;i<nums.size();i++){
    //     for (int j=0;j<nums.size();j++){
    //         if(i!=j)
    //         ans[i]*=nums[j];
    //     }
    // }*1
    // for (int val:ans)
    // cout<<val<<", ";

    //optimised, time complexity and space O(n)
    // vector <int> prefix(nums.size());
    // vector <int> suffix(nums.size());
    // prefix[0]=1;
    // for(int i=1;i<nums.size();i++)
    // prefix[i]=prefix[i-1]*nums[i-1];

    // suffix[nums.size()-1]=1;

    // for (int i=nums.size()-2;i>-1;i--)
    // suffix[i]=suffix[i+1]*nums[i+1];

    // for (int i=0;i<nums.size();i++)
    // ans[i]=prefix[i]*suffix[i];

    // for (int val:ans)
    // cout<<val<<", ";
    
    //and space complexity O(1)

    ans[0] = 1;
    for (int i = 1; i < nums.size(); i++)
    ans[i] = ans[i - 1] * nums[i - 1];

    int suffix = 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
        ans[i] =ans[i] * suffix;
        suffix = suffix * nums[i];
    }
    for (int val:ans)
    cout<<val<<", ";

}
