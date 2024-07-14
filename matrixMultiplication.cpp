#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    int m1[n1][n2],m2[n2][n3];
    cout<<"ENter the rows and column of first matrix ";
    cin>>n1>>n2;
    cout<<"Now enter the column of second matrix ";
    cin>>n3;
    cout<<"Now enter the elements of array one by one:-";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    return 0;
}