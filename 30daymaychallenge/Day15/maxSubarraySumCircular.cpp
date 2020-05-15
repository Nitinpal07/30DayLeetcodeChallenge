class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int currmax=0;
        int currmin=0;
        int sum=0;
        for(int i=0;i<A.size();i++){
            currmax = max(A[i],A[i]+currmax);
            maxi=max(currmax,maxi);
            currmin = min(A[i],A[i]+currmin);
            mini = min(currmin,mini);
            sum+=A[i];
        }
        if(maxi>0){
            return max(maxi,sum-mini);
        }
        else{
            //case when all are negative we have to return maximum of all numbers ;
            return maxi;    
        }
        
    }
};
