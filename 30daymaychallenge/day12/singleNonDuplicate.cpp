class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=-1;
        if(nums.size()==1)return nums[0];
        for(int i=0;i<nums.size()-1;i=i+2){
            if(nums[i]!=nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        if(ans==-1){
            ans=nums[nums.size()-1];
        }
     return ans;
    }
};
