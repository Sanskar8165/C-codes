#include<bits/stdc++.h>
using namespace std;
int HexadecimalToDecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter n ";cin>>n;
    cout<<HexadecimalToDecimal(n);
    return 0;
}