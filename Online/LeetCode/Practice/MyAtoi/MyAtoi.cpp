#include<bits/stdc++.h>
using namespace std;
int myAtoi(string str) {
        long long int val=INT_MIN;
        int neg=0;
        for(auto c:str){
            if(val>INT_MAX && neg!=1){
                return INT_MAX;
            }
            if(val>INT_MAX && neg==1){
                return INT_MIN;
            }
            if(c=='-' && val==INT_MIN && neg==0){
                neg=1;
            }else
            if(c=='+' && val==INT_MIN && neg==0){
                neg=2;
            }else
            if(isdigit(c)){
                if(val==INT_MIN){
                    val=0;
                }
                val=(val*10)+c-48;
            }else
            if(isspace(c) && val==INT_MIN && neg==0){
                continue;
            }else{

                break;
            }

        }
        if(val==INT_MIN){
                    val=0;
        }
        if(neg==1){
            val=val*(-1);
        }

        val=(val<INT_MIN)?INT_MIN:val;
        val=(val>INT_MAX)?INT_MAX:val;
        return val;
}
int main(){

string s;
cin>>s;

cout<<myAtoi(s);
return 0;
}
