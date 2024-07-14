#include<bits\stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char a[100]="apple";
    cout<<a<<endl;
    char b[100];int i=0,ch;
    while(ch!='\n'){
        ch=getchar();
        b[i]=ch;          //b[i]=getchar();
        i++;
    }b[i]='\0';
    cout<<"Hello Mr. = "<<b;
    strcpy(b,a);
    cout<<a<<endl<<b<<endl;
    cout<<strrev(a)<<endl;
    cout<<strupr(a)<<endl;
    cout<<strlwr(a)<<endl;
    cout<<a<<endl;
    char na[5][20];
    cout<<"Enter 5 student names:-\n";
    for(int i=0;i<5;i++){
        gets(na[i]);
    }
    cout<<"student list:-\n";
    for(int i=0;i<5;i++){
        cout<<na[i]<<endl;
    }
    }
 