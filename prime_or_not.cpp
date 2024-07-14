#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"ENter the no : ";
    cin>>no;
    for(int i=0;i<no;i++){
        if(no%i==0){
            continue;
        }
        else{
            cout<<no<<"is a prime no."<<endl;
        }
    }
}