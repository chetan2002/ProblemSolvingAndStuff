#include <bits/stdc++.h>
using namespace std;

bool checkprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(checkprime(n)){
            cout<<"Prime"<<endl;
        }else{
            cout<<"Not Prime"<<endl;
        }

    }
    return 0;
}
