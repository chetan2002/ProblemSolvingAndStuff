#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--){

        long long int n,k;
        cin>>n>>k;

        if(n==1 && k==0){
            cout<<'1'<<endl;
        }else
        if(n==2 && k==1){
            cout<<'1'<<endl;
        }else
        if(n>=((k*(k+1))/2)+2 && n>2 && k>0){
            cout<<'1'<<endl;
        }else{
            cout<<'0'<<endl;
        }

    }
    return 0;
}
