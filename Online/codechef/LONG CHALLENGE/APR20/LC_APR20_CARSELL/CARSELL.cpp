#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    std::vector<long long int> v;
	    for(long long int i=0;i<n;i++){
	        long long int val;
	        cin>>val;
	        v.push_back(val);
	    }
	    sort(v.begin(),v.end());
	    long long int sum=0;
	    for(long long int i=0;i<n;i++){
	    	long long int value=(v.at(i)-n+i+1);
	    	if(value>0){
	    		v.at(i)=value;
	    	}else{
	    		v.at(i)=0;
	    	}
	    	sum+=v.at(i);
	    }
	    cout<<sum%1000000007<<endl;

	}
	return 0;
}
