#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){

	   int length,q;
	   cin>>length>>q;
	   string s;
	   cin>>s;
       vector<int> alph(26,0);
       for(auto c:s){

            int v=c-97;
            alph.at(v)++;
       }
       int count=0;

       for(int i=0;i<q;i++){
        int l;
        cin>>l;
        count=0;
        for(auto a:alph){
            if(a>l){
                count += a-l;
            }

        }
        cout<<count<<endl;

       }


	}
	return 0;
}

