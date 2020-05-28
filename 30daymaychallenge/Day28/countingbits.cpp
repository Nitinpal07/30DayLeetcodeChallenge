class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> temp(num+1,0);
        
        for(int i=1;i<=num;i++){
            if(i%2==0){
                temp[i] = temp[i>>1];
            }
            else{
                temp[i] = temp[i-1]+1;
            }
        }
        return temp;
    }
};
