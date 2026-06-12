#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b)
        a=a%b;
        else
        b=b%a;
    }
    if(a==0) return b;
    if(b==0) return a;
}
int main(){
    cout<<gcd(20,28)<<endl;
    return 0;
}

