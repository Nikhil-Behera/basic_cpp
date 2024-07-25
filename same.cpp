#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element no "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            cout<<"The distinct element is: "<<arr[i]<<endl;
            //break;
        }
        else{
            cout<<"No distinct element..."<<endl;
        }
    }
    return 0;
}