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
    return 0;
}