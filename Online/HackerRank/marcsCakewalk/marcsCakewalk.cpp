#include <bits/stdc++.h>

using namespace std;


// Complete the marcsCakewalk function below.
long marcsCakewalk(vector<int> calorie) {

    sort(calorie.begin(),calorie.end(),greater<int>());
    long sum=0;
    for(int i=0;i<calorie.size();i++){
        sum+= (pow(2,i)*calorie.at(i));
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    vector<int> c;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        c.push_back(val);
    }
    cout<<marcsCakewalk(c)<<endl;
    return 0;
}

