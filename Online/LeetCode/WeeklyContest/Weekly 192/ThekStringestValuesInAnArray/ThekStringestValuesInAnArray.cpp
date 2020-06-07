
static int m=0;

bool compare(int a,int b){
    int val1=abs(a-m);
    int val2=abs(b-m);
    if(val1==val2){
        return a>b;
    }
    return val1>val2;

}
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());

        m=arr.at((n-1)/2);

        sort(arr.begin(),arr.end(),compare);
        vector<int> new1(k,0);
        for(int i=0;i<k;i++){
            new1.at(i)=arr.at(i);
        }
        return new1;
    }

};
