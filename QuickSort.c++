#include<iostream>
using namespace std;
int partition(int* arr,int low,int high){
    int pivot=arr[0];
    int i=low+1;
    int j=high;

   do{ 
    while(arr[i]<=pivot){
        i++;
    }

    while(arr[j]>pivot){
        j--;
    }

    if(i<j){
        swap(arr[i],arr[j]);
    }
   } while(i<j);
   swap(arr[low],arr[j]);
   return j;
}
void quick(int* arr,int low,int high){
   int partitionindex;
   if(low<high){
   partitionindex=partition(arr,low,high);
   quick(arr,low,partitionindex-1);
   quick(arr,partitionindex+1,high);}
}
int main(){
    int n;
    cout<<"n:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick(arr,1,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}