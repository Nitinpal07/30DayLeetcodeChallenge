class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        for(int i=0;i<s1.size();i++)a[s1[i]-'a']++;
        
        int t = s1.size();
        for(int i=0;i<s2.size();i++){
            b[s2[i] - 'a']++;
		   if(i >= t) b[s2[i - t] - 'a']--; //reducing the window size
		    if(b == a)return true;
        }
             
        
        return false;
    }
};
