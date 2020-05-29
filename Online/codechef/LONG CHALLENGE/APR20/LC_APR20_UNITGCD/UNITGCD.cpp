#include <bits/stdc++.h>

using namespace std;


int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){

        long long int n;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl<<"1 1 \n";
            continue;
        }

        long long int val=n/2;
        cout<<val<<"\n";


        if(n%2!=0 && n>2){
            cout<<"3 1 2 "<<n<<"\n";
            n--;
        }else if(n%2==0){
            cout<<"2 1 2"<<"\n";
        }
        if(n!=3){
            for(long long int i=3;i<=n;i+=2){
                cout<<"2 "<<i<<" "<<i+1<<"\n";
            }
        }
    }
    return 0;
}
