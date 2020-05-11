class Solution {
public:
    void fun(vector<vector<int>> &a,int i,int j,int oldcolor,int newcolor){
        if(i<0 || i==a.size() || j<0 || j==a[0].size()){
            return;
        }
        if(a[i][j]==newcolor){
            return;
        }
        if(a[i][j]==oldcolor){
            a[i][j]=newcolor;
            fun(a,i+1,j,oldcolor,newcolor);
            fun(a,i-1,j,oldcolor,newcolor);
            fun(a,i,j-1,oldcolor,newcolor);
            fun(a,i,j+1,oldcolor,newcolor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        fun(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};
