#include<bits/stdc++.h>
using namespace std;

int greedy_change(vector<int> coins , int value){

    int n=0;
    for(int i=0;i<coins.size() && value>0;i++){
		n+= (value/coins.at(i));
		value%=coins.at(i);
    }

    return n;

}


int main(){

    //Enter num of denominations
	int n;
	cin>>n;
	vector<int> coins;
	//Enter all the denominations
    for(int i=0;i<n;i++){
		int val;
		cin>>val;
		coins.push_back(val);
    }
    sort(coins.rbegin(),coins.rend());
    //Enter the change value
    int value;
    cin>>value;
    cout<<greedy_change(coins,value)<<endl;
	return 0;
}
