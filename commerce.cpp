#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"cp: ";
    cin>>cp;
    int sp;
    cout<<"sp: ";
    cin>>sp;

    int marg=sp-cp;
    if(sp>=cp){
        cout<<"Hurray!! its profit by: "<<marg<<endl;
    }
    else{
        cout<<"It is loss by : "<<marg<<endl;
    }
    return 0;
}