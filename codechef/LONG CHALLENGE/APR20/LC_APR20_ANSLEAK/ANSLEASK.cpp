#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	 int n,m,k;
	 cin>>n>>m>>k;
	 for(int i=0;i<n;i++){
	     vector<int> A(k,0);
	    for(int j=0;j<k;j++){
	        int val;
	        cin>>val;
	        A[j]=val;
	    }
	    sort(A.begin(),A.end());
	    int mel=A.at(0),mc=1,cl=-1,cc=0;
	    for(int j=0;j<k;j++){
	        if(A.at(j)==cl){
	            cc++;
	        }else{
	            if(cc>=mc){
	                mc=cc;
	                mel=cl;
	            }
	            cl=A.at(j);
	            cc=0;
	        }
	    }
	    if(cc>=mc){
	                mc=cc;
	                mel=cl;
	    }
	    cout<<mel<<" ";
	 }
	}
	return 0;
}
