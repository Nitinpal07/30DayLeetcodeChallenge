class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int K) {
        priority_queue<pair<double,int>> q;
        
        for(int i=0;i<p.size();i++){
            double distance = sqrt((p[i][0]*p[i][0] + p[i][1]*p[i][1]));
            q.push({distance,i});
            if(q.size()>K){
               // cout<<q.top().first<<endl;
                q.pop();
            }
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back(p[q.top().second]);
            q.pop();
        }
        return ans;
    }
};
