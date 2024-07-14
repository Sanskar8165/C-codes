#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter size of Array : " <<endl;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array:-\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nArray before sorting:-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int counter=1;
    while(n-counter!=0){             //counter<n-1 //counter<n
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"Array after sorting :-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}