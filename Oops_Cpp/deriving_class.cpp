#include <bits/stdc++.h>
using namespace std;
class basic_info{
private:
    char name[20];
    int rollno;
    char sex[10];
public:
    void getdata();
    void display();
    };

class  physical_fit :public basic_info{
private:
    float height;
    float weight;
public:
    void getdata();
    void display();

};

void basic_info::getdata(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter rollno : ";
    cin>>rollno;
    cout<<"Enter sex : ";
    cin>>sex;
}

void basic_info ::display(){
    cout<<"Name is : "<<name<<endl;
    cout<<"Roll no is : "<<rollno<<endl;
    cout<<"Sex is : "<<sex<<endl;

}
void physical_fit::getdata(){
    basic_info ::getdata();
    cout<<"Enter height : ";
    cin>>height;
    cout<<"Enter weight : ";
    cin>>weight;
}
void physical_fit ::display(){
    basic_info ::display();
    cout<<"Height is "<<height<<" feet"<<endl;
    cout<<"Weight is "<<weight<<endl;

} int main(){
    cout<<" Chetan Aggarwal"<<"   41514802718  "<<endl;
    physical_fit Sg;
    cout<<"Enter the following details: "<<endl;
    Sg.getdata();
    cout<<endl<<endl;
    cout<<"The details are : "<<endl;
    Sg.display();
    return 0;
}
