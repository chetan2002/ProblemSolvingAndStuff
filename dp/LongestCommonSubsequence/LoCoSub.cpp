#include<bits/stdc++.h>
using namespace std;

void LCS(string s1,string s2){
    vector<vector<int>> v;
    for(int i=0;i<=s1.length();i++){
        vector<int> v2(s2.length()+1);
        v.push_back(v2);
    }
    for(int i=0;i<=s2.length();i++){
        v[0][i]=0;

    }
    for(int i=0;i<=s1.length();i++){
        v[i][0]=0;
    }
    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            if(s1.at(i-1) == s2.at(j-1)){
                v[i][j]=v[i-1][j-1]+1;
            }else{
                v[i][j]=max(v[i][j-1],v[i-1][j]);
            }
        }
    }
    int i=s1.length();
    int j=s2.length();
    int m=v[i][j];
    int l=m;
    cout<<"Length of Longest Common Subsequence:"<<l<<endl;
    char c[l+1];
    while(v[i][j]!=0){
        if((s1[i-1]==s2[j-1]) && (v[i][j]==v[i-1][j-1]+1)){
            c[l-1]=s1[i-1];
            i--;
            j--;
            l--;
        }else{
            if(v[i][j]==v[i-1][j]){
                i--;
            }else
            if(v[i][j]==v[i][j-1]){
                j--;
            }
        }
    }
    c[m]='\0';
    cout<<"String is:"<<c<<endl;

}

int main(){
    cout<<"enter two strings:"<<endl;
    string S1,S2;
    cin>>S1>>S2;

    LCS(S1,S2);

    return 0;

}
