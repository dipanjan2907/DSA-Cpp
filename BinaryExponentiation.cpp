//binary exponentiation for computing x^n;
//for eg, binary of 5 is 101, so
//for 1, x=3, 1st binary of n=1, so ans=3*1=3 and then 3*3 compulsory step,
//for 0, x=9, 2nd binary of n=0, so only 9*9 compulsory step, [x=x*x]
//for 1, x=81, 3rd binary of n=1, so ans=ans*x=3*81=243

#include <iostream>
using namespace std;
int main(){
    double x=3;
    long n=-5;
    if(n<0)
    {
        x=1/x;
        n=-n;
    }
    double ans=1;
    while(n>0)
    {
        if(n%2==1) 
        ans*=x; //if number in binary form of exponent is 1 then multiply else ignore
        x*=x; //always multiply the number(x) irrespective of 0 or 1 in binary of power
        n/=2; //converting into binary
    }
    cout<<ans<<endl;
    return 0;
}