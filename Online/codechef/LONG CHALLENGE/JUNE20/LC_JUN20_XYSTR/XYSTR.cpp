#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
	   string s;
	   cin>>s;

	   char h='0';
	   int count=0;
	   for(auto c:s){
	       if(c=='x'){
	           if(h=='0'){
	               h='x';
	           }else
	           if(h=='y'){
	               count++;
	               h='0';
	           }
	       }else
	       if(c=='y'){
	           if(h=='0'){
	               h='y';
	           }else
	           if(h=='x'){
	               count++;
	               h='0';
	           }
	       }
	   }
	   cout<<count<<endl;

	}
	return 0;
}
