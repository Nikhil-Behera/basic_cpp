#include<iostream>
using namespace std;
void selsort(int* arr,int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;}
    }
}
int main(){
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: "<<endl;
        cin>>arr[i];
    }
    selsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}