#include<iostream>
using namespace std;
void min(int* arr,int n,int lo,int hi){
    int ans=0;
    if(n==1){
        cout<<arr[0]<<endl;
    }
    if(arr[lo]<arr[hi]){
        cout<<arr[lo]<<endl;
    }
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]<arr[mid+1]){
            cout<<arr[mid];
        }
        if(arr[mid]>arr[mid+1]){
            cout<<arr[mid+1];
        }
        
        if(arr[mid]>arr[lo]){
            lo=mid+1;
        }
        else {
            hi=mid-1;
        }
        
    }}

int main(){
    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"element : "<<endl;
        cin>>arr[i];
    }

    int lo=0;
    int hi=n-1;
    min(arr,n,lo,hi);
    return 0;
}