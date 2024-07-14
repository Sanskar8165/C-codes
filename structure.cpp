#include<bits/stdc++.h>
using namespace std;
int main(){
    struct Cars
    {
        string brand;
        string model;
        int year;
    };
    Cars mycar1;
    Cars mycar2;
    mycar1.brand="BMW";
    mycar1.model="X5";
    mycar1.year=1999;
    mycar2.brand="Ford";
    mycar2.model="Mustang";
    mycar2.year=1969;

    cout<<mycar1.brand<<" "<<mycar1.model<<" "<<mycar1.year<<endl;
    cout<<mycar2.brand<<" "<<mycar2.model<<" "<<mycar2.year<<endl;
    
}
/*
struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here
*/