#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<< "Enter the no of rows and column ";
    cin>>row>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}