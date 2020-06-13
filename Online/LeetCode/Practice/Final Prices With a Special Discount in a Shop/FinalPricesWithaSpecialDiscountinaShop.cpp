class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();

        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                if(prices.at(i)>=prices.at(j)){
                    prices.at(i)-=prices.at(j);
                    break;
                }
            }
        }
        return prices;
    }
};
