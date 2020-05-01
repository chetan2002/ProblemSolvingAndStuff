#include <iostream>
using namespace std;
template <class T>
class test  {
    T a, b;
public:
    test (T first, T second)
    {
        a=first; b=second;
    }
    T sum ();
};

template <class T> T test<T>::sum ()
{
  return a+b;
}

int main () {
	cout<<"Chetan Aggarwal"<<"  41514802718"<<endl;
	test <int> obj1 (100, 75);
  	cout<<"Sum of integers is ="<<obj1.sum()<<endl;
  	test <float> obj2(1.22,3.66);
  	cout<<"Sum of float is = "<<obj2.sum()<<endl;
  	return 0;
}

