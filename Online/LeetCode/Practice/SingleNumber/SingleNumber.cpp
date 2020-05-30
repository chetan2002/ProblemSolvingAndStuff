#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int ans=0;
        for(auto a: nums){
            ans=ans^a;
        }
        return ans;
}

int main(){
	vector<int> v{1,2,3,3,2};
	cout<<singleNumber(v);

	return 0;
}
