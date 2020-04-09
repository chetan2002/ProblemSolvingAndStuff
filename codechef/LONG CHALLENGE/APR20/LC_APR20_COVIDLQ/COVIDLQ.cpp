#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int flag=0;
	    int n;
	    cin>>n;
	    int count=6;
	    for(int i=0;i<n;i++){
	        int val;
	        cin>>val;
	        if(val==0){
	            count++;
	        }
	        if(val==1){
	            if(count>=5){
	                count=0;
	                continue;
	            }else{

	                flag=1;

	            }
	        }

	   }
	   if(flag==1){
	       cout<<"NO"<<endl;
	   }else{
	       cout<<"YES"<<endl;
	   }

	}
	return 0;
}
