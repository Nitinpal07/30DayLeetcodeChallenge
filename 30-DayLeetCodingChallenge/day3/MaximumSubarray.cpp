class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int omax=INT_MIN;
       int cmax=0;
        for(int i=0;i<nums.size();i++){
            cmax = max(nums[i],nums[i]+cmax);
            omax =  max(omax,cmax);
        }
        
        return omax;
    }
};
