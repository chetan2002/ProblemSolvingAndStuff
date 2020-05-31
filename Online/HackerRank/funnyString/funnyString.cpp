#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

    int d1=0,d2=0;
    bool fun=false;
    for(int i=0;i<s.length()-1;i++){
        int c1,c2,c3,c4;
        c1=s.at(i);
        c2=s.at(i+1);
        c3=s.at(s.length()-i-1);
        c4=s.at(s.length()-i-2);
        d1=c1-c2;
        d2=c3-c4;
        d1=abs(d1);
        d2=abs(d2);
        if(d1!=d2){
            return "Not Funny";
        }
    }
    return "Funny";

}

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<funnyString(s)<<endl;
    }

    return 0;
}
