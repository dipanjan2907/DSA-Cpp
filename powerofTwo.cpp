class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 and (n&(n-1))==0;
    }
};

//power of 3
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        return false;
        while(n%3==0)
        n/=3;
        return n==1;
    }
}