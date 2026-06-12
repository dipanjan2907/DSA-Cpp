//container with most water problem

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> height={1,8,6,2,5,4,8,3,7};
    //brute force
    int maxwater=0;
    for (int i=0;i<height.size();i++){
        for (int j=i+1;j<height.size();j++){
            int w=j-i;
            int ht=min(height[i],height[j]);
            int currwater=w*ht;
            maxwater=max(maxwater,currwater); 
        }
    }
    cout<<"Maximum Water= "<<maxwater<<endl;
    
    //2 pointer approach, optimal
    maxwater=0;
    int lp=0, rp=height.size()-1;
    while (lp<rp){
        int w=rp-lp;
        int ht=min(height[lp],height[rp]);
        int currwater=w*ht;
        maxwater=max(maxwater,currwater);
        height[lp]<height[rp]? lp++:rp--;
    }
    cout<<maxwater<<endl;
    return 0;
}