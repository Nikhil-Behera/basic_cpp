#include<iostream>
using namespace std;

int partition(int* arr,int l,int h,int p){
    int i=l;
    p=arr[l];
    int j=h;
    while(i>j){
        do{
            i++;
        }while(arr[i]<=p);
        do{
            j--;
        }while(arr[j]>p);
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
void quicksort(int* arr,int l,int h,int p){
    int j;
    if(l<h){
        j=partition(arr,l,h,p);
        quicksort(arr,l,j-1,p);
        quicksort(arr,j+1,h,p);
    }
}


int main(){
    int n;
    cout<<"Enter teh length : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<"elemnt: "<<endl;
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    int p=arr[0];
    quicksort(arr,l,h,p);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}