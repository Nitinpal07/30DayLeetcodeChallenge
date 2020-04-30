class Solution {
public:
    void rotate(string &s,int k,int dir){
        if(dir==1){
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.begin()+k);
            reverse(s.begin()+k,s.end());
        }
        else{
            reverse(s.begin(),s.begin()+k);
            reverse(s.begin()+k,s.end());
            reverse(s.begin(),s.end());
        }
    }
    string stringShift(string s, vector<vector<int>>& shift) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
         for(int i=0;i<shift.size();i++){
             rotate(s,shift[i][1],shift[i][0]);
         }
        return s;
    }
};
