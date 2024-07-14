#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key){
    int s=0;int e=n;
    int mid=(s+e)/2;
    while(s>e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of Array : " <<endl;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array:-\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to be searched in array : ";
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
}