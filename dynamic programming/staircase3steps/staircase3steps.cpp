#include <bits/stdc++.h>

using namespace std;
Staircasefib(int n){

    vector<int> A(n+1,0);
    A[1]=1;
    A[2]=2;
    A[3]=4;

    for(int i=4;i<=n;i++){
        A[i]=A[i-1]+A[i-2]+A[i-3];
    }

    return A[n];

}

int main()
{
    int n;
    cin>>n;
    cout<<Staircasefib(n)<<" number of ways"<<endl;
    return 0;
}
