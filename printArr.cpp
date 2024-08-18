#include<iostream>
using namespace std;
int print(int *arr, int idx, int n){
    if(idx==n){
        return 0;
    }
    
    cout<<arr[idx]<<endl;
    print(arr,idx+1,n);
    return 0;
}
int main(){
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){ 
        cout<<"enter the elem "<<i<<endl;
        cin>>arr[i];
    }
    int idx=0;
    print(arr,idx,n);
    return 0;
}