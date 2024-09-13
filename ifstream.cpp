#include<iostream>
#include<fstream>
using namespace std;
int  main(){
    string mytext;
    ifstream myread("hehe.txt");
    while(getline(myread,mytext)){
        cout<<mytext;
    }
    myread.close();
    return 0;
}