#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
int palindromeIndex(string s) {

    int i=0,j=s.length()-1;
    int pos=-1;
    while(i<=j){
        if(s.at(i)!=s.at(j)){
            if(s.at(j-1)==s.at(i) && s.at(j-2)==s.at(i+1)){
                pos=j;
                j--;
                break;
            }else{
                pos=i;
                i++;
                break;
            }
        }else{
            i++;
            j--;
        }
    }
    return pos;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<palindromeIndex(s)<<endl;
    }

    return 0;
}
