#include<bits\stdc++.h>
using namespace std;
//this is call by reference
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//this is call by value
void swapv(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    //here value is passed so a and b will remain constant and will not change
}

int main(){
    int a=2;int b=3;
    swapv(a,b);
    cout<<a<<" "<<b<<endl;
    int* aptr=&a;int *bptr=&b;                          //int* a or int * a or int *a three of them willl work
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    //we can also do this without declaring two extra pointers by just passing the address of variable in the function directly
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0 ;


}