class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        auto it=nums.begin();
        while(it<nums.end()){
            if((*it)==0){
                count++;
                nums.erase(it);
            }else{
                it++;
            }
        }

        for(int i=0;i<count;i++){
            nums.push_back(0);
        }
    }
};
