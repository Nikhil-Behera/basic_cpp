#include<iostream>
using namespace std;
int binsrc(int* arr,int tgt,int lo,int hi){
    if(lo>hi) return -1;
    int mid=(lo+hi)/2;
    if(arr[mid]==tgt){
        return mid;
    }
    else if(arr[mid]<tgt){
        return binsrc(arr,tgt,lo=mid+1,hi);
    }
    else{
        return binsrc(arr,tgt,lo,hi=mid-1);
    }
}
int  main(){
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
    int lo=0;
    int hi=n-1;
    //int mid=(lo+hi)/2;
    int ans=binsrc(arr,tgt,lo,hi);
    if(ans==-1){
        cout<<"Not present..."<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}