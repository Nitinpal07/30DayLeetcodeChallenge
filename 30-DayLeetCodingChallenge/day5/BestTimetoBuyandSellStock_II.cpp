class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ti_1k0=0;
        int ti_1k1=INT_MIN;
        for(int i=0;i<prices.size();i++){
            int temp1= max(ti_1k0,ti_1k1 +prices[i]);
            int temp2 = max(ti_1k1,ti_1k0-prices[i]);
            ti_1k0=temp1;
            ti_1k1=temp2;
        }
        return ti_1k0;   
    }
};
