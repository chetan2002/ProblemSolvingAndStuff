#include<bits/stdc++.h>
using namespace std;

int findNumOfPeople(double p){
		if(p>=1){
			return 367;
		}
	 return ceil(sqrt(2*365*log(1/(1-p))));
}



int main(){

	//enter probability of two people getting same bday in decimal
	double p;
	cin>>p;
	cout<<findNumOfPeople(p)<<endl;
	return 0;

}
