#include <iostream>
using namespace std;
int main(){
    int a1[7]={1,2,3,4,5,3,1};
    int a2[5]={6,7,3,1,3};
    for (int i=0;i<7;i++)
    {
        for (int j=0;j<5;j++)
        {
            if(a1[i]==a2[j]){
                cout<<a1[i]<<", ";
                break;
            }
        }
    }
    return 0;
}