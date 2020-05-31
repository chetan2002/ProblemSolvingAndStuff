#include<bits/stdc++.h>
using namespace std;


    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {

        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);

        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(),horizontalCuts.end());

        long long int max1=0;
        for(int i=0;i<verticalCuts.size()-1;i++){
            int sub=abs(verticalCuts.at(i+1)-verticalCuts.at(i));
            max1=(sub>max1)?sub:max1;
        }
        long long int max2=0;
        for(int i=0;i<horizontalCuts.size()-1;i++){
            int sub=abs(horizontalCuts.at(i+1)-horizontalCuts.at(i));
            max2=(sub>max2)?sub:max2;
        }

        long long int max= (max1*max2)%(1000000007);

        return max;

    }

    int main(){

		int h,w;
		cin>>h>>w;
		vector<int> v;
		vector<int> ho;
		int vn;
		int hn;
		cin>>vn>>hn;
		for(int i=0;i<hn;i++){
			int a;
			cin>>a;
			ho.push_back(a);

		}
		for(int i=0;i<vn;i++){
			int a;
			cin>>a;
			v.push_back(a);

		}

		cout<<maxArea(h,w,ho,v)<<endl;
		return 0;
    }

