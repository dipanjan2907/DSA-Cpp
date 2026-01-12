#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
//brute force
void bruteforce(vector<int>& nums){
    int n=nums.size();
    vector<vector<int>> ans;
    set<vector<int>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());
                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    //return ans;
}

void better(){
    //run loop 2 times, same as above..check if b+c=-a
    //after loop1: tar=nums[i], after loop 2: third=tar-nums[j]
}

void optimized(vector<int>& nums){
    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1,k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0)
            j++;
            else if(sum>0)
            k--;
            else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;k--;
                while(j<k && nums[j]==nums[j-1]) j++;
            }
        }
    }
}
int main(){
    cout<<"Hello";
    return 0;
}