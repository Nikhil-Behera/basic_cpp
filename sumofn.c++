#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int i=0;
    int ans=0;
    while(i<=n){
        ans+=i;
        i++;
    }
    cout<<"The answer is: "<<ans<<endl;
    return 0;

}