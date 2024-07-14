#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int initial=n;
    cout<<"Enter n ";
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n/=10;
    }
    if(initial=sum){
        cout<<"The no. is Armstrong number.";
    }
    else{
        cout<<"the no. is not a Armstrong number";
    }
    return 0;
}