/*

https://www.hackerrank.com/challenges/strong-password/problem

*/



#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string p) {
    // Return the minimum number of characters to make the password strong
    string sp="!@#$%^&*()-+";
    int count1=0,count2=0;
    if(n<6){
        count1=6-n;
    }
    bool digit=false,Uch=false,spec=false,Lch=false;
    for(auto c: p){
        if(isdigit(c)){
            digit=true;
        }else
        if(isupper(c)){
            Uch=true;
        }else
        if(islower(c)){
            Lch=true;
        }else
        {
            if(sp.find(c)!=std::string::npos){
                spec=true;
            }

        }
    }
    if(!digit){
        count2++;
    }
    if(!Uch){
        count2++;
    }
    if(!Lch){
        count2++;
    }
    if(!spec){
        count2++;
    }

    return (count1>count2)?count1:count2;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<minimumNumber(n,s)<<endl;
    return 0;
}
