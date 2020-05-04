class Solution {
public:
    int findComplement(int num) {
        
        string s="";
        while(num){
            if(num&1){
                s.push_back('0');
            }
            else{
                s.push_back('1');
            }
            num = num>>1;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        int ans=0;
        int index=0;
        for(int i=s.size()-1;i>=0;i--){
           ans += pow(2,index)*(s[i]-'0');
            index++;
        }
        return ans;
    }
};
