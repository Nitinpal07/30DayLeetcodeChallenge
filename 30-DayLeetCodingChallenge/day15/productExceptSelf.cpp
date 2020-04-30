class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product(nums.size());
        product[0]=1;
        for(int i=1;i<nums.size();i++){
            product[i] = product[i-1]*nums[i-1];
        }
        int temp=1;
        
        for(int i=nums.size()-2;i>=0;i--){
             temp=temp*nums[i+1];
            product[i] = product[i]*temp;
           
        }
        return product;
    }
};
