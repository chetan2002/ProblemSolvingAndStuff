#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> imp;
    long imp_sum=0,unimp_sum=0;

    while(n--){
        int num1,num2;

        cin>>num1>>num2;
        if(num2){
            imp_sum+=num1;
            imp.push_back(num1);
        }else{
            unimp_sum+=num1;
        }
    }
    sort(imp.begin(),imp.end());
    if(k<imp.size()){
        for(int i=0;i<(imp.size()-k);i++){
            imp_sum -=(2*imp.at(i));
        }
    }
    imp_sum+=unimp_sum;
    cout<<imp_sum<<endl;


}
