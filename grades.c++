#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter your marks: ";
    cin>>m;
    if(m>80){
        cout<<"Grade = A+"<<endl;
    }
    else if(m>60){
        cout<<"Grade = A";
    }
    else if(m>40){
        cout<<"Grade = B"<<endl;
    }
    else if(m>35){
        cout<<"Grade = C"<<endl;
    }
    else{
        cout<<"Fail hai lawde tu.";
    }
    return 0;
}