#include <bits/stdc++.h>
using namespace std;

class Integer {
    int i;

public:

    Integer(int i = 0)
    {
        this->i = i;
    }

    Integer operator++()
    {
        Integer temp;
        temp.i = ++i;
        return temp;
    }

    void display()
    {
        cout << "i = " << i << endl;
    }
};

int main()
{
    cout<<"Chetan Aggarwal"<<"   41514802718  "<<endl<<endl;
    int num;
    cin>>num;
    Integer i1(num);

    cout << "Before increment: ";
    i1.display();
    Integer i2 = ++i1;

    cout << "After pre increment: ";
    i2.display();
}

