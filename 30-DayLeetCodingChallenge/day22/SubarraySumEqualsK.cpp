class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
        int ans=0;
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            if(curr_sum==k){
                ans++;
            }
            if(m.find(curr_sum-k)!=m.end()){
                ans+=m[curr_sum-k];
            }
            m[curr_sum]++;
        }
        
        return ans;
    }
};
