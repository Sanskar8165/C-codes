#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main(){
    int n,arr[n];
    cout<<"Enter the length of Array : ";
    cin>>n;
    cout<<"One by one Enter the elements of array:-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]!=-1]){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }

    return 0;
}