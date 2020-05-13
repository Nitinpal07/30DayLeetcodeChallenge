class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()<=k){
            return "0";
        }
         if(k==0){
             return num;
         }
        string s;
        
        for(int i=0;i<num.size();i++){
            if(s.size()==0 && num[i]=='0'){
                continue;
            }
            while(s.size()!=0 && s[s.size()-1]>num[i] && k>0){
                k--;
                s.pop_back();
            }
            s.push_back(num[i]);
        }
        
        while(k>0)
        {
            s.pop_back();
            k--;
        }
        while(s.length()>1 && s[0]=='0'){
            s.erase(0,1);
        }
       
        return s;
    }
};
