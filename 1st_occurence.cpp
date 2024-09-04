#include<iostream>
using namespace std;

int binsrc(int* arr,int tgt,int lo,int hi){
    int ans=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==tgt){
            ans=mid;
            hi=mid-1;
        }
        else if(arr[mid]<tgt){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
        return ans;
    }
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
    int lo=n-1;
    int hi=0;
    int ans = binsrc(arr,tgt,lo,hi);
    cout<<ans;
    return 0;
}