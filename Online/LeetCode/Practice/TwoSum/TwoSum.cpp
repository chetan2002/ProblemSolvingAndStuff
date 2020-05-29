#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> sum;
        for(int i=0; i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if(target==nums[i]+nums[j]){
                    sum.push_back(i);
                    sum.push_back(j);
                    return sum;
                }
            }
        }
   return sum;
}



int main(){

	vector<int> v{2,7,11,12};
	vector<int>v1=twoSum(v,9);

	for(auto c: v1){
		cout<<c<<" ";
	}
	cout<<endl;
	return 0;
}
