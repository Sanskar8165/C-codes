#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
}
int add(int num1,int num2){
    print(num1);
    print(num2);
    int sum=num1+num2;
    cout<<"The sum of two numbers is :";
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter the two no.s : ";
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;


}