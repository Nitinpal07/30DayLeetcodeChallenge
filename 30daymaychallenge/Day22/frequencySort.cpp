class Solution {
public:
    static bool mycomp(pair<int,char> a,pair<int,char> b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first>b.first;
    }
    string frequencySort(string s) {
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        vector<pair<int,char>> a;
        
        string ans="";
        for(auto i:m){
            a.push_back({i.second,i.first});
        }
        sort(a.begin(),a.end(),mycomp);
        for(int i=0;i<a.size();i++){
            int count=a[i].first;
            char c=a[i].second;
            while(count--){
                ans+=c;
            }
        }
        return ans;
    }
    
};
