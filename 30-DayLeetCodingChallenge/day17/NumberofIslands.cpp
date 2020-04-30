class Solution {
public:
    
    void dfs(vector<vector<int>> &a,vector<vector<bool>> &v,int i,int j,int &ans){
        if(i<0 || i==a.size() || j<0 || j==a[0].size() || v[i][j]==true || a[i][j]==0){
            return;
        }
        v[i][j]=true;
        dfs(a,v,i-1,j,ans);
        dfs(a,v,i+1,j,ans);
        dfs(a,v,i,j+1,ans);
        dfs(a,v,i,j-1,ans);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0 || grid[0].size()==0){
            return 0;
        }
        vector<vector<int>> a(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(grid[i][j]=='1'){
                    a[i][j]=1;
                }
            }
        }
         vector<vector<bool>> v(grid.size(),vector<bool>(grid[0].size(),false));
        int ans=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==1){
                    if(v[i][j]==false){
                        ans++;
                        dfs(a,v,i,j,ans);
                    }
                }
            }
        }
        return ans;
    }
};
