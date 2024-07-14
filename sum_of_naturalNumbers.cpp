#include<iostream>
using namespace std;
int add(int n){
    int sum= 1;
    for(int i=1;i<=n;i++){
        sum=(n*(n+1))/2;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int sum=add(n);
    cout<<sum;
    return 0;
}
