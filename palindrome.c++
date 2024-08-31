#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void palindrome(string s){
    string l=s;
    reverse(l.begin(),l.end());
    if(l==s){
        cout<<"The string is a palindrome...\n"<<endl;
    } 
    else{
        cout<<"Not a palindrome...\n"<<endl;
    } 
}
int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    palindrome(s);
    return 0;
}

