#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
	   long long int n;
	   cin>>n;
	   int prev , curr;
	   cin>>prev;
	   long long int sum=0;
	   for(int i=1;i<n;i++){
	       cin>>curr;
	       sum+=abs(curr-prev)-1;
	       prev=curr;
	   }
	   cout<<sum<<endl;
	 
	}
	return 0;
}
