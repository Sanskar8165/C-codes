#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,arr[m][n],temp;
    cout<<"Enter the no of rows : ";
    cin>>n;
    m=n;
    cout<<"Now enter the elements of array one by one:-\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                temp=arr[m][n];
                arr[m][n]=arr[n][m];
                arr[n][m]=temp;
                
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}