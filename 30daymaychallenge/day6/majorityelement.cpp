class Solution {
public:
    //solution by moore voting algorithm
    int majorityElement(vector<int>& nums) {
        int val=-1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                val=nums[i];
            }
            if(nums[i]==val){
                count++;
            }
            else{
                count--;
            }  
           
        }
        return val;
    }
};
