#include<bits/stdc++.h>
using namespace std;

struct job{
    char c;
    int deadl;
    int profit;
};

bool myCompare(job a,job b){
    return (a.profit>b.profit);

}

void selectJob(vector<job> v , int n){

    sort(v.begin(),v.end(),myCompare);

    vector<bool> status(n,false);
    vector<int> result(n);

    for(int i=0;i<n;i++){
        for(int j=min(n,v.at(i).deadl)-1;j>=0;j--){
            if(status.at(j)==false){
                status.at(j)=true;
                result.at(j)=i;
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(status.at(i)){
            cout<<v.at(result.at(i)).c<<" ";
        }
    }


}

int main(){
    int n;
    //Enter the number of entries;
    cin>>n;
    vector<job> v;
    for(int i=0;i<n;i++){
        //enter char then deadline then profit for each job
        char c;
        int deadl,profit;
        cin>>c>>deadl>>profit;
        v.push_back({c,deadl,profit});

    }
    selectJob(v,n);

return 0;
}
