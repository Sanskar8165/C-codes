/*#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,arr[n],key;
    cout<<"Enter the size of array : "<<endl;cin>>n;
    cout<<"Enter the elements of array : \n";for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key value : ";cin>>key;
    cout<<linearSearch(arr,n,key);
    return 0;
} */
#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, num, index;
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at Index No."<<index;
    cout<<endl;
    return 0;
}