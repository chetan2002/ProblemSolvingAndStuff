#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> v){
    int min = INT_MAX;
    int max = INT_MIN;
    int count=1;

    for(int i=1;i<v.size();i++){
        if((v.at(i)-v.at(i-1))<=2){
            count++;
        }else
        if((v.at(i)-v.at(i-1))>2){
            if(count>max){
                max=count;
            }
            if(count<min){
                min=count;
            }
            count=1;
        }
    }
    if(count>max){
        max=count;
    }
    if(count<min){
        min=count;
    }
    if(count == v.size()){
        min=count;
        max=count;
    }
    if(min==0){
        min=1;
    }
    if(max==0){
        max=1;
    }
    cout<<min<<" "<<max<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   std::vector<int> v ;
	   for(int i=0;i<n;i++){
	       int val;
	       cin>>val;
	       v.push_back(val);
	   }
	   sort(v.begin(),v.end());
	   solution(v);
	}
	return 0;
}

