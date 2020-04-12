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
	    vector<long long int> v;
	    for(long long int i=0;i<n;i++){
	        long long int val;
	        cin>>val;
	        if(val>100){
	            val=val%100;
	        }
	        v.push_back(val);
	    }
	    long long int count=0;
	    for(long long int i=0;i<v.size();i++){
	        long long int pro=1;
	        for(long long int j=i;j<v.size();j++){
	            pro*=v.at(j);


	            int val=pro;
	            if(pro<0){
                    val*=-1;
                    pro=pro%100;
	            }
	            if(val%4!=2){
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
