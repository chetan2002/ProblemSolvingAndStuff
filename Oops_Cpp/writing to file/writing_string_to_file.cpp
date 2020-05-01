#include <fstream>
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(){
    cout<<"Chetan Aggarwal"<<" 41514802718"<<endl<<endl;
    string str;
    ofstream fout;
    fout.open("testfile.txt",ios::out);
    char choice='y';
    do{
        cout<<"Enter the string to be written onto the file"<<endl;
        getline(cin,str);
        fout<<str<<endl;
        cout<<"Want to enter more text (y/n)"; cin>>choice;
    }
    while((choice=='y')||(choice=='Y'));
    fout.close();
}
