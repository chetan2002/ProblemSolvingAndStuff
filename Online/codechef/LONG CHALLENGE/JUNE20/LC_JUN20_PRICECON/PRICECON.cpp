#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;

	    int sum=0;
	    for(int i=0;i<n;i++){
	        int val;
	        cin>>val;
	        if(val>k){
	            sum+=val-k;
	        }
	    }
	    cout<<sum<<endl;


	}
	return 0;
}
