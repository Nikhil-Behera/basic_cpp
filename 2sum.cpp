#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    int target;
    cin>>target;
   
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                cout<<i<<","<<j<<endl;
            }
        }
    }
}