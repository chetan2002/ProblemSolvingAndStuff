#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {

    map<char,int> m;
    for(char c: b){

        auto it = m.find(c);
        if(it==m.end()){
            m.insert(pair<char,int>(c,1));
        }else{
            it->second=(it->second)+1;
        }
    }
    bool isHappy=true;
    for(int i=1;i<b.size()-1;i++){
        if(b.at(i-1)!=b.at(i) && b.at(i+1)!=b.at(i)){
            isHappy=false;
        }
    }
    bool und0=true;
    bool single=false;
    for(auto it=m.begin(); it!=m.end(); ++it){
        if(it->first=='_'){
            und0 = false;
        }
        if(it->second==1 && it->first!='_'){
            single=true;
        }

    }
    if(single){
        return "NO";
    }else
    if(!single && und0 && !isHappy){
        return "NO";
    }
    else{
        return "YES";
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<happyLadybugs(s)<<endl;
    }
    return 0;
}
