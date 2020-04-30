class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int i=0;
        int j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                j=i;
            }
            else if(nums[j]==0){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
    }
};
