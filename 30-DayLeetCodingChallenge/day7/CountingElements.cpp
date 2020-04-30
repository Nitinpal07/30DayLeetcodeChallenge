class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(m.find(arr[i]+1)!=m.end()){
                if(m[arr[i]+1]>0){
                    count++;
                }
            }
        }
        return count;
    }
};
