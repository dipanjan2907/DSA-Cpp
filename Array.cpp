#include <iostream>
#include <climits>
using namespace std;
int main(){
    int marks[5]={99,100,54,36,88}; //initialize
    marks[0]=101; //update
    cout<<sizeof(marks)<<endl; //4 for int * no of elements= size of array
    cout<<"Number of elements= "<<sizeof(marks)/sizeof(int)<<endl;// no of elements

    int a = INT_MAX ; //stores +infinity
    int b= INT_MIN; //stores -infinity
    
    //arithmatic ops on arrays
    for (int i=0;i<5;i++)
    marks[i]=2*marks[i];

    for (int i=0;i<5;i++)
    cout<<marks[i]<<" ";

    //reverse array
    // int start=0, end=sz-1;
    // while(start<end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
    return 0;
}