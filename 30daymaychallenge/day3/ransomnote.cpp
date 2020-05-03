class Solution {
public:
    bool canConstruct(string rn, string mag) {
        map<char,int> m;
        for(int i=0;i<mag.length();i++){
            m[mag[i]]++;
        }
        for(int i=0;i<rn.length();i++){
            if(m[rn[i]]>0){
                m[rn[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
