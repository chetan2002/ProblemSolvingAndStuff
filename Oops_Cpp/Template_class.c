#include<iostream>
using namespace std;

template <class T>
void Swap(T &x, T &y)  {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()  {
    int x, y;
    float a,b;
    char c1,c2;
    cout<<"Chetan Aggarwal"<<" 41514802718"<<endl<<endl;
    cout << "Enter Integer Values :";
    cin >> x>>y;
    cout <<"Before Swap values are :"<<x<<" "<<y<<endl;
    Swap(x, y);
    cout << "After Swap values are :"<<x<<" "<<y<<endl<<endl;
    cout << "Enter Float Values :";
    cin >> a>>b;

    cout << "Before Swap values are :"<<a<<" "<<b<<endl;
    Swap(a, b);
    cout << "After Swap values are :"<<a<<" "<<b<<endl<<endl;
    cout << "Enter Character Values :";
    cin >> c1>>c2;
    cout << "Before Swap values are :"<<c1<<" "<<c2<<endl;
    Swap(c1, c2);
    cout << "After Swap values are :"<<c1<<" "<<c2<<endl<<endl;
    return 0;
}
