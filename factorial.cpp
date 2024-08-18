#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    int ans=fact(n);
    cout<<"Your answer is: "<<ans<<endl;
}