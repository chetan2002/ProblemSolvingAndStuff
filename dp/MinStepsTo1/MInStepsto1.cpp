#include <bits/stdc++.h>
using namespace std;

int stepsto1(int m){
    vector<int> A(m+1,0);
    A[0]=0;
    A[1]=0;

    for(int i=2;i<=m;i++){
        int R1=A[i-1]+1;
        int R2=INT_MAX;
        int R3=INT_MAX;

        if(i%2==0){
            R2=A[i/2]+1;
        }
        if(i%3==0){
            R3=A[i/3]+1;
        }
        A[i]=min(R1,min(R2,R3));
    }

    return A[m];
}


int main()
{   int m;
    cout << "enter m" << endl;
    cin>>m;

    cout<<stepsto1(m)<<endl;
    return 0;
}
