#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c:";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"a is the largest among the three";
        }
        else{
            cout<<"c is the largest";
        }
    }
    if(b>a){
        if(b>c){
            cout<<"b is the largest";
        }
        else{
            cout<<"c is the largest";
        }
    }
    return 0;
}