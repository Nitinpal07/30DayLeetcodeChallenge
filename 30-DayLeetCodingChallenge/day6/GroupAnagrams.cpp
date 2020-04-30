class Solution {
public:
    string countsort(string &s){
       map<char,int> m;
       for(int i=0;i<s.size();i++){
           m[s[i]]++;
       }
       string temp="";
       for(auto i:m){
           int n=i.second;
           while(n--){
               temp+=i.first;
           }
       } 
       return temp; 
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
           string s =countsort(strs[i]);
           m[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
