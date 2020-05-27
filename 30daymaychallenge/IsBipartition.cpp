class Solution {
public:
    
    bool dfs(vector<vector<int>> &a,vector<int> &color,int i,int c,vector<int> &vis){
      vis[i] = 1;
      color[i]= c;
      for(int j=0;j<a[i].size();j++){
          if(vis[a[i][j]]==0){
              if(dfs(a,color,a[i][j],1-c,vis)==false){
                  return false;
              }
          }
          else{
              if(color[i]==color[a[i][j]]){
                  return false;
              }
          }
      }
      return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        //1. create a directed graph from the given pair list
        vector<vector<int>> a(N+1);
        for(int i=0;i<dislikes.size();i++){
            a[dislikes[i][0]].push_back(dislikes[i][1]);
            a[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        //2.create a color array
        vector<int> color(N+1,-1);
        vector<int> vis(N+1,0);
        for(int i=1;i<=N;i++){
            //no color on ith node
            if(color[i]==-1){
                if(dfs(a,color,i,1,vis)==false){
                    return false;
                }
                //make 0 color on this node
            }
        }
        return true;
    }
};
