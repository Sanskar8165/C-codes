#include<iostream>
using namespace std;
int main(){
    int rows,column;
    cout<<"ENter rows and columns : ";
    cin>>rows>>column;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=column;j++){
            cout<<"@";
        }
        cout<<endl;
    }
}