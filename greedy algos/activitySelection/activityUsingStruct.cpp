#include<bits/stdc++.h>
using namespace std;

struct Activity{
    int start , finish;
};

bool ActCom(Activity s1, Activity s2){
    return (s1.finish < s2.finish);
}
void printActivity(vector<Activity> v){

    sort(v.begin(),v.end(),ActCom);

    cout<<v[0].start<<"----->"<<v[0].finish<<endl;
    int j=0;
    for(int i=1;i<v.size();i++){
        if(v[i].start >= v[j].finish){
            cout<<v[i].start<<"----->"<<v[i].finish<<endl;
            j=i;
        }
    }
}

int main(){
    vector<Activity> v;

    int n;
    //Number of activities
    cin>>n;

    for(int i=0;i<n;i++){
        Activity A;
        cin>>A.start;
        cin>>A.finish;
        v.push_back(A);
    }

    printActivity(v);
    return 0;
}
