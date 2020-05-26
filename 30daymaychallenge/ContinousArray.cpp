class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 0;
        }
        vector<int> a(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                a[i]=1;
            }
            else{
                a[i]=-1;
            }
        }
        int presum = 0;
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<a.size();i++){
           presum+=a[i];
           if(presum==0){
               ans = max(ans,i+1);
           }
           if(m.find(presum)!=m.end()){
               ans = max(ans, i - m[presum]);
           }
           else{
               m[presum]=i;
           }
        }
        return ans;
    }
};
