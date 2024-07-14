#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the two numbers :- ";
    cin>>n1>>n2;
    char opr;
    cout<<"Enter the operator ";
    cin>>opr;
    switch (opr)
    {
    case '+':
        cout<<n1+n2;
        break;
        case '-':
        cout<<n1-n2;
        break;
        case '*':
        cout<<n1*n2;
        break;
        case '/':
        cout<<n1/n2;
        break;
        case '%':
        cout<<n1%n2;
        break;
    
    default:
        cout<<"ENter correct ooperator";
        break;
    }
}