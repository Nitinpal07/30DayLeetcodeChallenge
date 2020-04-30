class Solution {
public:
    int maximalSquare(vector<vector<char>>& a) {
         if(a.size()==0)return 0;
        if(a[0].size()==0)return 0;
        int ans=0;
        vector<vector<int>> m(a.size(),vector<int>(a[0].size(),0));
       
        
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
             if(a[i][j]=='1'){
                 ans=1;
                 m[i][j]=1;
             }
            }
        }
        if(ans==0)return 0;
        for(int i=1;i<m.size();i++){
            for(int j=1;j<m[0].size();j++){
                
                if(m[i][j]==1 && (m[i-1][j-1] && m[i-1][j] && m[i][j-1])){
                    
                    m[i][j] = 1+ min(m[i-1][j-1],min(m[i-1][j],m[i][j-1]));
                    ans=max(ans,m[i][j]);
                }
            }
        }
        return ans*ans;
    }
};
