#include<bits\stdc++.h>
using namespace std;
int main(){
    int a=10;
    int *b=&a;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<*b<<endl; //this is called dereferencing
    *b=200;//agr a ki value change karni ho  bina a ko use kare
    cout<<a<<endl;
    int arr[3]={10,20,30};//jab ham array declare karte hai to hamare paas ek variable aa jata hai jo ki point kar raha hota hai 0th element of array
    cout<<arr<<endl;//it behaves similar as pointer
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;//ye karne se vo sabse pehle 10 ko access karega uske baad 4bit aage chala jaega or 20 karega and so on

    }
    //or
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        //arr++ ----> ye illegal hai error de dega .. kyoki use modify nahi kar sakte

    }
    //pointer to pointer
    int **q=&ptr;
    cout<<*q<<endl;
    cout<<**q<<endl;


    return 0;
}//pointer ki wajeh se kisi variable ko access kar sakte hai or value modify bhi kar sakte hai
