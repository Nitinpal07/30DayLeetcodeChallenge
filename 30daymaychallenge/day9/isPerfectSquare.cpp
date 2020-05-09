class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1)return true;
        
        int l=0;
        int h=num/2;
        while(l<=h){
            int mid= l +(h-l)/2;
            long long ans = mid*mid;
            if(num==ans){
                return true;
            }
            else if(ans<num){
                l = mid+1;
                
            }
            else{
                h=mid-1;
            }
        }
        return false;
    }
};
