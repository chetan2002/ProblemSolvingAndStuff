#include<bits/stdc++.h>
using namespace std;

int mincount(int n){
    int m=sqrt(n);
    int A[n+1][m+1];
    for(int i=0;i<=n;i++){
        A[i][0]=0;
    }
    for(int j=0;j<=m;j++){
        A[0][j]=0;
        A[1][j]=j;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j>=(i*i)){
                A[i][j]=min(A[i-1][j],1+A[i][j-(i*i)]);
            }else{
                A[i][j]=A[i-1][j];
            }
        }
    }
    return A[n][m];
}
int main(){
    int n;
    cin>>n;

    cout<<"Min number of squares needed to represent "<<n<<"="<<mincount(n)<<endl;

    return 0;
}
