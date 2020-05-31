#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {

    vector<int> v(26,0);
    for(auto c: s){
        int x=c-97;
        v.at(x)++;
    }
    bool odd=false;
    for(int c: v){
        if(c%2!=0 && !odd){
            odd=true;
        }else
        if(c%2!=0 && odd){
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    string s;
    cin>>s;
    cout<<gameOfThrones(s)<<endl;

    return 0;
}

