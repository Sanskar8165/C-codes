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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Array after sorting:-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}