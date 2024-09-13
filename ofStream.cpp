#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream Myfile("hehe.txt");
    Myfile<<"kitni baarish bc..."<<endl;
    Myfile.close();
}
/*To create a file, use either the ofstream or fstream class, and specify the name of the file.

To write to the file, use the insertion operator (<<).*/