#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            A.push_back(val);
        }
        int max=INT_MIN;
        vector<int> El;
        for(int i=n-1;i>=0;i--){
            if(A[i]>max){
                El.push_back(A[i]);
                max=A[i];
            }
        }
        reverse(El.begin(),El.end());
        for(int i=0;i<El.size();i++){
            cout<<El[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
