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
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current &&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"Array after sorting :-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}