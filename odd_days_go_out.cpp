#include<iostream>
using namespace std;
int main(){
    int pocket_money=3000;
    int date;
    cout<<"Enter today's date : ";
    cin >> date;
    for(date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocket_money==0){
            break;
        }
        cout<<"You can go out"<<endl;
        return 0;
    }
}