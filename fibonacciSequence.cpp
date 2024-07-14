#include<iostream>
using namespace std;
void fibo(int n){
    int n1=0,n2=1,nextTerm;
    for(int i=1;i<=n;i++){
        cout<<n1<<endl;
        nextTerm=n1+n2;
        n1=n2;
        n2=nextTerm;

    }
    return;
}
int main(){
    int n;
    cout<<"ENter n : ";
    fibo(n);
}