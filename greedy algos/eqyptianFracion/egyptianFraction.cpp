/*Egyptian Fraction Problem*/
#include<bits/stdc++.h>
using namespace std;


void egyptianFraction(int nr , int dr){

    if(nr<=0 || dr<=0){
        cout<<"Invalid"<<endl;
        return ;
    }

    if(dr%nr == 0){
        cout<<"1/"<<dr/nr<<endl;
        return;
    }

    if(nr%dr == 0){
        cout<<nr/dr<<endl;
        return ;
    }

    if(nr>dr){
        cout<<nr/dr<<" + ";
        egyptianFraction(nr%dr , dr);
        return;
    }

    int n=dr/nr + 1;
    cout<<"1/"<<n<<" + "<<endl;

    egyptianFraction(nr*n - dr , n*dr);

}



int main(){
    //Enter the value of numrator and denominator
    int nr,dr;
    cin>>nr>>dr;

    cout<<"egyptian Fractions of "<<nr<<"/"<<dr<<" are:"<<endl;
    egyptianFraction(nr,dr);

    return 0;

}
