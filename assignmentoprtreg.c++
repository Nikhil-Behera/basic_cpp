#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int n;
    cout<<"Enter the increment number: ";
    cin>>n;
    int c;
    c = num+=n;
    cout<<"The final ans is: "<<c;
    

    return 0;
}