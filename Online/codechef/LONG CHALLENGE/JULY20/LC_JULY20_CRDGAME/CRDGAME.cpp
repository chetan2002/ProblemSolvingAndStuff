#include <bits/stdc++.h>
using namespace std;

long long int dismantle(long long int v){
    long long int sum=0;
    while(v>0){
        sum+=(v%10);
        v=v/10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
	   long long int n;
	   cin>>n;
	   long long int sc1=0 , sc2=0;
	   for(int i=0;i<n;i++){
	       long long int fir, sec;
	       cin>>fir>>sec;
	       fir = dismantle(fir);
	       sec = dismantle(sec);
	       if(fir>sec){
	           sc1++;
	       }else
	       if(sec>fir){
	           sc2++;
	       }else
	       {
	           sc1++;
	           sc2++;
	       }
	   }
	   if(sc1>sc2){
	       cout<<'0'<<" "<<sc1<<endl;
	   }else
	   if(sc1<sc2){
	        cout<<'1'<<" "<<sc2<<endl;
	   }else{
	       cout<<'2'<<" "<<sc1<<endl;
	   }
	 
	}
	return 0;
}
