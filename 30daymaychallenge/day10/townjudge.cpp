class Solution {
public:
    int findJudge(int N, vector<vector<int>>& t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(N==1)return 1;
        
        vector<int> indegree(N+1,0);
        vector<int> outdegree(N+1,0);
        
        for(int i=0;i<t.size();i++){
            int a = t[i][0];
            int b = t[i][1];
            indegree[b]++;
            outdegree[a]++;
        }
        for(int i=0;i<N+1;i++){
            if(indegree[i]==N-1 && outdegree[i]==0){
                return i;
            }
        }
        return -1;
    }
};
