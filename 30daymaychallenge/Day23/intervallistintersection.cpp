class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        vector<vector<int>> ans;
        
        
        int i=0;
        int j=0;
        
        while(i<A.size() && j<B.size()){
            
            int x1 = A[i][0];
            int x2 = A[i][1];
            int y1 = B[j][0];
            int y2 = B[j][1];
            if(x2 < y1) i++;
            else if(y2<x1) j++;
            else{
                ans.push_back({max(x1,y1),min(x2,y2)});
                if(x2<y2){
                    i++;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};
