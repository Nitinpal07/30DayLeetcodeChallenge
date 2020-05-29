class Solution {
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& p) {
        
        vector<int> indegree(numCourses,0);
        vector<int> a[numCourses];
        for(int i=0;i<p.size();i++){
           a[p[i][1]].push_back(p[i][0]);
           indegree[p[i][0]]++;
        }
        int ans=0;
        queue<int> q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int curr_node = q.front();
            ans++;
            q.pop();
            for(int child:a[curr_node]){
                indegree[child]--;
                if(indegree[child]==0){
                    q.push(child);
                }
            }
        }
        if(ans==numCourses){
            return true;
        }
        return false;
    }
};
