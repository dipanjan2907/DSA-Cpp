#include <iostream>
#include <vector>
using namespace std;
//pass by reference using pointers
//refer to notes for pass by alias
void changeB(int* ptr3)//int b
{   //b=20;
    *ptr3=20;
}
int main(){
    // & is known as ampercent also, used to take out/denote address
    //pointers are special variable that store address of other variables
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    cout<<&a<<"\n"<<endl;
    cout<<&ptr<<endl;

    //pointer to pointer
    int ** ptr2=&ptr;
    cout<<ptr2<<"\n"<<endl;

    //* also known as dereference operator
    cout<<*(&a)<<endl; //same with ptr

    //NULL pointer, can't be dereferrenced
    int* nptr=NULL;
    cout<<nptr<<endl;

    int b=10;
    //changeA(b);
    changeB(&b);
    cout<<"Inside main func: "<<b<<"\n"<<endl; //20

    //array pointers
    int arr[5]={1,2,3,4,5}; //type of pointer which always stores element at 0 index
    cout<<arr<<endl;
    cout<<*arr<<"\n"<<endl;
    // arr=&a; error, array is constant pointer

    int c=30;
    int * cptr=&c;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<"\n"<<endl;
    //recap: 1 int= 4 bytes

    cout<<*(arr)<<endl;
    cout<<*(arr+1)<<"\n"<<endl;

    int* ptr4; //100
    int* ptr1=ptr+2; //108
    cout<<ptr1-ptr2<<endl; //2 ->no of bytes
    cout<<ptr1<ptr2<<"\n"<<endl; //same with other relational operators
    return 0;
}