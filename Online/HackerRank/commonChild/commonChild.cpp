#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2) {

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
    return v[s1.length()][s2.length()];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
