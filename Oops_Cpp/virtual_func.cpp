#include<iostream>
using namespace std;
class LIST
{ public:
    virtual void store()=0;
    virtual void retrieve()=0;
};
class B:public LIST
{ public:
    void store()
    {
        cout<<"function called"<<endl;
    }
    void retrieve()
    {
        cout<<"fuction calling"<<endl;
    }
};

int main()
{
    cout<<"Chetan Aggarwal"<<" 	 41514802718 "<<endl<<endl;
    B obj; obj.store();
    obj.retrieve();
    return 0;
}
