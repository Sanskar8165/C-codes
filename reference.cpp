#include<bits/stdc++.h>
using namespace std;
int main(){
    string food="Pizza";
    string &meal=food;
    cout<<food<<endl;
    cout<<meal<<endl;
    meal="Burgirr";
    cout<<food<<endl;
    cout<<meal<<endl;
    cout<<&food<<endl;
    cout<<&meal<<endl;
    
}