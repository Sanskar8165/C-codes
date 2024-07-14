#include<bits/stdc++.h>
using namespace std;
class Cars{
    public:
    string brand;
    string model;
    int year;
    void out(){
        cout<<"Car brand is : "<<brand<<endl;
        cout<<"Car model is : "<<model<<endl;
        cout<<"Car launch year is : "<<year<<endl;

    }
};
int main(){
    Cars myCar1;
    myCar1.brand="Mahendra\n";
    myCar1.model="XUV 700\n";
    myCar1.year=2018;
    myCar1.out();

    return 0;
}