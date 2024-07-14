#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=n;i>=1;i--){
        factorial*=i;
    }
return factorial;
}
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int ans=fact(n);
    cout<<ans;
}