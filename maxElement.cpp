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
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];                //max=max(max,arr[i])
        }
    }
    cout<<"The max element of an array is "<<max<<endl;
    return 0;
}