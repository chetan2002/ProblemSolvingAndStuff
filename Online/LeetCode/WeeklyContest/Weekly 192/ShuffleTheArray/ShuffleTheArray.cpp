class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> newA(2*n,0);

        int pointer1=0,pointer2=n,i=0;
        while(i<2*n){
            if(i%2==0){
                newA.at(i)=nums.at(pointer1);
                pointer1++;
                i++;
            }else
                if(i%2!=0){
                    newA.at(i)=nums.at(pointer2);
                    pointer2++;
                    i++;
                }
        }
        return newA;
    }
};
