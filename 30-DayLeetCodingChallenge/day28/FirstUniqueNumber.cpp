class FirstUnique {
public:
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    unordered_map<int,int> m;
    int t;
    FirstUnique(vector<int>& nums) {
        t=1;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                q.push({t,nums[i]});
                t++;
            }
            m[nums[i]]++;
        }
        
    }
    
    int showFirstUnique() {
        while(!q.empty()){
            if(m[q.top().second]==1){
                return q.top().second;
            }
            else{
                q.pop();
            }
        }
        return -1;
    }
    
    void add(int value) {
        if(m.find(value)==m.end()){
            q.push({t,value});
            t++;
            m[value]++;
        }
        else{
            m[value]++;
        }
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
