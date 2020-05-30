#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        long long int sum=INT_MIN,best=INT_MIN;
        for(int s: nums){
            sum=(s>s+sum)?s:(s+sum);
            best=(best>sum)?best:sum;
        }
        return best;
}

int main(){
	vector<int> v{-2,1,-3,4,-1,2,1,-5,4};
	cout<<maxSubArray(v)<<endl;

	return 0;
}
