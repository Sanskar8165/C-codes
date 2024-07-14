#include<iostream>
using namespace std;
int main(){
    int n,arr[n],max=0;
    cout<<"Enter the size of array:-";
    cin>>n;
    cout<<"Enter the elements of array:-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            count+=arr[j];
            cout<<count;
        }
    }
}