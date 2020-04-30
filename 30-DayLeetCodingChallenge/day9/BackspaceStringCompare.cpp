class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i = S.size() - 1;
        int j = T.size() - 1;
        int skipi=0;
        int skipj=0;
        
        while(i>=0 || j>=0){
            
            while(i>=0){
                if(S[i]=='#'){
                    i--;
                    skipi++;
                }
                else if(skipi>0){
                    i--;
                    skipi--;
                }
                else{
                    break;
                }
            }
            while(j>=0){
                if(T[j]=='#'){
                    j--;
                    skipj++;
                }
                else if(skipj>0){
                    j--;
                    skipj--;
                }
                else{
                    break;
                }
            }
            if(i>=0 && j>=0 && S[i]!=T[j]){
                return false;
            }
            if(i<=0 || j<=0 ){
                return i!=j;
            }
            i--;
            j--;
        }
        
        return i==j;
    }
};
