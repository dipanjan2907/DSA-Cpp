#include <iostream>
using namespace std;
int main(){
    int nums[5]={2,7,10,11,15};
    //brute force, do yourself
    //optimal
    int i=0,j=4, target=27;
    while(i<j)
    {
        int pairsum=nums[i]+nums[j];
        if (pairsum>target)
        j--;
        else if (pairsum<target)
        i++;
        else{
        cout<<nums[i]<<" & "<<nums[j];
        break;}
    }
    return 0;
}