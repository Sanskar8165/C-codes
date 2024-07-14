#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,arr[n],max=0;
    cout<<"Enter the size of array:-";
    cin>>n;
    cout<<"Enter the elements of array:-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int curr=2;
    while(j<n){
        if(pd==arr[i]-arr[0]){
            curr+=1;
        }
        else{
            pd=arr[i]-arr[0];
            curr+=2;
        }
        ans= max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}