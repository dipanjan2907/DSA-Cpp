#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec={1,2,3}; //0
    cout<<vec[0]<<endl;
    
    vector<int>::iterator it; //access memory location, can be used in loop in place of i
    vector <int> vec1(3,0); //vec(a,b)- a=size, b=element in each space
    cout<<vec1[0]<<vec1[2]<<endl;
    cout<<"Size= "<<vec.size()<<endl;
    vec1.push_back(25);
    vec.pop_back();
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    //vec.at(<index>);
    vector <char> ch;
    ch.push_back('a');
    ch.push_back('b');
    // ch.push_back('c');
    // ch.push_back('d');
    // ch.push_back('e');
    // ch.push_back('f');
    cout<<"Size of ch= "<<ch.size()<<endl;
    cout<<"Capacity of ch= "<<ch.capacity()<<endl; //capacity gets doubled if no of elements more than size
    //for each loop
    for(int val: vec){
        cout<<val<<endl;
    }

    //single number
    vector <int> sn={4,1,2,1,2};
    int ans=0; 
    for(int val: sn){
        ans=ans^val; //ans^=val
    }
    cout<<ans<<endl;
    return 0;
}