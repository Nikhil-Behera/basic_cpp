#include<iostream>
using namespace std;
void peak(int* arr,int n,int lo,int hi){
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;


        // if(arr[mid]>arr[mid-1]){
        //     lo=mid+1;
        // }
        // else if(arr[mid]<arr[mid-1]){
        //     hi=mid-1;
        // }

        if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
            cout<<arr[mid];
        }
    }
}
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
    peak(arr,n,lo,hi);
    return 0;
}