#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,1,1};
    //brute force approach, time- n^2
    for (int i=0;i<5;i++)
    {
        int freq=0;
        for (int j=0;j<5;j++)
        {
            if (arr[i]>arr[j])
            freq++;
        }
        if (freq>5/2){
        cout<<"Majority Element= "<<arr[i]<<endl;
        break;}
    }

    //Optimal (only for sorted array), time n log n
    int arr1[5]={1,1,2,2,2};
    int freq=1,ans=arr1[0];
    for (int i=1;i<5;i++)
    {
        if(arr1[i]==arr1[i-1])
        freq++;
        else
        {
        freq=1;
        ans=arr1[i];
        }
        if (freq>5/2){
        cout<<"Majority Element== "<<arr1[i]<<endl;
        break;}
    }

    //Moore's Voting algo, most optimised. time- n
    int a[10]={1,1,2,2,2,1,1,2,1,1};
    freq=0,ans=0;
    for (int i=0; i<10;i++){
        if(freq==0){
            ans=a[i];
        }
        if(ans==a[i])
            freq++;
        else
            freq--;
    }
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(ans==a[i])
        count++;
    }
    if(count>10/2)
        cout<<"Majority Element=== "<<ans<<endl;
    else
        cout<<"Oopss!! Majority Element doesn't exist"<<endl;
    return 0;
}