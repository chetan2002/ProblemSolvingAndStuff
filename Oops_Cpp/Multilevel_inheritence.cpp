#include<iostream>
using namespace std;

class student{
protected:
    int roll_no;
    char name[40];
    char college[40];
public:
    void get_input();
    void print_data();
};

void student::get_input()
{
    cout<<endl<<"Enter roll-no: ";
    cin>>roll_no;
    cout<<endl<<"Enter name: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<endl<<"Enter college name: ";
    cin.getline(college,20);
}

void student::print_data()
{
    cout<<endl<<endl<<" Roll No. :"<<roll_no;
    cout<<endl<<endl<<" Name:"<<name;
    cout<<endl<<endl<<" College:"<<college;
}

class exam:virtual public student{
    protected: int marks[6];
public:
    void get_marks();
};

void exam::get_marks()
{
    cout<<"Enter Marks :"<<endl;
    for(int i=0;i<6;i++)
    {
        while(true) {
            cout<<endl<<"Subject"<<i+1<<":";
            cin>>marks[i];
            if(marks[i]>=0&&marks[i]<=100)
                break;
            cout<<"Invalid marks given!!Enter proper marks. <<endl";
        }
    }
}

class result:public exam
{ private:
    int grand_total;
   public:
     void get_info();
     void display();
};

void result::get_info()
{   get_input();
    get_marks();
}

void result::display()
{
    grand_total=0;
    for(int i=0;i<6;i++)
        grand_total+=marks[i];
    print_data();
    cout<<endl<<endl<<" Total marks obtained by "<<name<<" is "<<grand_total<<endl;
    cout<<endl<<" Percentange is "<<(grand_total)/6<<" %"<<endl;
}

int main()
{
    cout<<"Chetan Aggarwal"<<"  	 	41514802718 "<<endl<<endl;
    int num,i;
    while(true)
    {
        cout<<"Enter number of students: ";
        cin>>num;
        if(num>0)
            break;
        cout<<"Invalid number given!!\n";
    }
    result *stu=new result[num];
    for(i=0;i<num;i++)
    {
        cout<<endl<<"Enter record for student no: "<<i+1<<endl;
        stu[i].get_info();
    }

    for(i=0;i<num;i++)
    {
    cout<<endl<<"Record for student no.  "<<i+1<<" is :";
    stu[i].display();
    }
    cout<<endl;
    delete[]stu;
    return 0;
}
