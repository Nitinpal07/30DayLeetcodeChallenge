class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> m;
        for(int i=0;i<S.size();i++){
            m[S[i]]++;
        }
        int ans=0;
        for(int i=0;i<J.size();i++){
            if(m.find(J[i])!=m.end()){
                ans+=m[J[i]];
            }
        }
        return ans;
    }
};
