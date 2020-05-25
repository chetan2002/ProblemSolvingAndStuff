#include <bits/stdc++.h>

using namespace std;

int money(int m, vector<int> coins ){
    int n=coins.size();
    vector<vector<int>> A;
    for(int i=0;i<n;i++){
        vector<int> l(m+1,0);
        A.push_back(l);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            if(i==0){
                A.at(i).at(j)=j;
                continue;
            }
            if(j==0){
                A.at(i).at(j)=0;
                continue;
            }
            if(j>=coins[i]){
                A[i][j]=min(A[i-1][j], 1+ A[i][j-coins[i]]);
            }else{
                A[i][j]=A[i-1][j];
            }
        }
    }
    return A[coins.size()-1][m];
}
int main()
{   int d,m;
    vector<int> c;
    cout << "Enter the no. of denominations:";
    cin>>d;
    cout<<"Enter the denominations:"<<endl;
    for(int i=0;i<d;i++){
        int val;
        cin>>val;
        if(i==0 && val!=1){
            cout<<"first denomination should be 1 , please try again"<<endl;
            i--;
            continue;
        }
        c.push_back(val);
    }
    cout<<"Enter the value to be exchanged:";
    cin>>m;
    cout<<endl<<"You need atleast "<<money(m,c)<<" coins for exchange of "<<m<<" money value"<<endl;
    return 0;
}
