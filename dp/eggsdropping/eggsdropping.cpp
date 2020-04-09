#include <bits/stdc++.h>

using namespace std;

int eggsdrp(int n,int m){
    vector<vector<int>> A;
    for(int i=0;i<m;i++){
        vector<int> a(n+1,0);
        A.push_back(a);
    }
    for(int i=0;i<m;i++){
        A[i][0]=0;
        A[i][1]=1;
    }
    for(int i=0;i<=n;i++){
        A[0][i]=i;
    }
    for(int i=1;i<m;i++){
        for(int j=2;j<=n;j++){
            A[i][j]=INT_MAX;
            for(int k=1;k<=j;k++){
                int res=1+max(A[i-1][k-1],A[i][j-k]);
                if(res<A[i][j]){
                    A[i][j]=res;
                }
            }
        }
    }
    return A[m-1][n];

}

int main()
{   cout<<"Enter the number of floor and number of eggs available"<<endl;
    int n,m;
    cin>>n>>m;
    cout<<eggsdrp(n,m)<<" is minimum number of trials to be needed to find out the floor on which egg breaks."<<endl;
    return 0;
}
