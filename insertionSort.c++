#include<iostream>
using namespace std;

 void insSort(int* arr,int n)
 {
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
 }

int main(){
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter teh elem: "<<i<<endl;
        cin>>arr[i];
    }
    insSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}