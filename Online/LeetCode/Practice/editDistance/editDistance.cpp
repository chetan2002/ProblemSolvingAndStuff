#include<bits/stdc++.h>
using namespace std;

int minDistance(string word1, string word2) {
	int m=word1.length();
    int n=word2.length();
    vector<vector<int>> ar;

    for(int i=0;i<=m;i++){
    vector<int> v(n+1,0);
       ar.push_back(v);
    }

    for(int i=0;i<=n;i++){
       ar.at(0).at(i)=i;
    }
    for(int i=0;i<=m;i++){
       ar.at(i).at(0)=i;
    }

    for(int i=1;i<=m;i++){
       for(int j=1;j<=n;j++){
           if(word1.at(i-1)==word2.at(j-1)){
               ar[i][j]=ar[i-1][j-1];
           }else{
               ar[i][j]= 1+ min(ar[i-1][j-1] , min(ar[i-1][j] , ar[i][j-1]));
           }
       }
    }
	return ar[m][n];
}

int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<minDistance(s1,s2)<<endl;
	return 0;
}
