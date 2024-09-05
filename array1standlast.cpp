#include<iostream>
using namespace std;
void binsrc(int* arr,int tgt,int n){
    int lo=0;
    int hi=n-1;
    int ans,ans1,cand,cand1;
    //int mid=(lo+hi)/2;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]>tgt){
            ans=mid;
            hi=mid-1;
            
        }
        else{
            lo=mid+1;
        }
    }
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]>=tgt){
            ans1=mid;
            hi=mid-1;
        }
        else{
                lo=mid+1;
            }
    }
    cout<<ans<<","<<ans1<<endl;
}
int main(){
    int n;
    cout<<"n:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tgt;
    cout<<"Target: "<<endl;
    cin>>tgt;
    binsrc(arr,tgt,n);
    // int f,l;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==tgt){
    //         l=i;
    //     }                        /*This is brute force solution...*/
    // }
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]==tgt){
    //         f=i;
    //     }
    // }
    // cout<<"["<<f<<","<<l<<"]"<<endl;
    return  0;
}