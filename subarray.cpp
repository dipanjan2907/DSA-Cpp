#include <iostream>
#include <climits>
using namespace std;
int main(){
    //Subarrays
    int n=5;
    int arr[5]={1,2,3,4,5};
    
    for (int st=0;st<n;st++)
    {
        for (int end=st; end<n;end++)
        {
            for (int i=st;i<=end;i++)
            cout<<arr[i];
            cout<<" ";
        }
        cout<<endl;
    }

    //max subarray sum by brute force
    int maxSum=INT_MIN;
    for (int st=0;st<n;st++)
    {
        int currsum=0;
        for (int end=st;end<n;end++)
        {
            currsum+=arr[end];
            maxSum=max(currsum, maxSum);
        }
    }
    cout<<"Max subarray sum by Brute force= "<<maxSum<<endl;

    //by Kadane's Algo
    int currsum=0;
    maxSum=INT_MIN;
    for (int st=0;st<n;st++){
        currsum+=arr[st];
        maxSum=max(currsum,maxSum);
        if(currsum<0)
        currsum=0;
    }
    cout<<"Max subarray sum by Kadane's Algo= "<<maxSum<<endl;
}