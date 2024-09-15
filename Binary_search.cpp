#include<iostream>
#include<vector>
using namespace std;

int binsrc(vector <int> &arr,int tgt){
    int lo=0;
    int hi=arr.size()-1;

    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==tgt) return mid;
        else if(arr[mid]<tgt){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"n:"<<endl;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<"The array entered is: "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    int tgt;
    cout<<"Enter the target: "<<endl;
    cin>>tgt;

    int ans;
    ans=binsrc(arr,tgt);
    if(ans==-1){
        cout<<"Element not found...\n";
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}