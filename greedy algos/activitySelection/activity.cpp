#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//sorted using bubble sort , could've been better
sortItMyWay(vi f , vi s){
    int n=f.size();
    for (int i = 0; i < n-1; i++)
    {
    // Last i elements are already in place
        for (int j = 0; j < n-i-1; j++){
            if (f[j] > f[j+1])  {
                swap(&f[j], &f[j+1]);
                swap(&s[j],&s[j+1]);
            }
        }
    }

}

void Activity(vi f, vi s){
    cout<<s.at(0)<<"--->"<<f.at(0)<<endl;

    int j=0;
    for(int i=1;i<s.size();i++){
        if(s.at(i)>=f.at(j)){
            cout<<s.at(i)<<"--->"<<f.at(i)<<endl;
            j=i;
        }
    }

}


int main(){

    vi s;
    vi f;

    int n;
    //input number of activities
    cin>>n;

    //first input the start time and then finish time of each activity;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.pb(val);
        cin>>val;
        f.pb(val);
    }
    //sort on behalf of finish time vector
    sortItMyWay(f,s);
    cout<<endl;
    Activity(f,s);

    return 0;
}
