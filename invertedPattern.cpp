#include<iostream>
using namespace std;
int main(){
    int n,rows,column;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Now enter the rows and column";
    cin>>rows>>column;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}