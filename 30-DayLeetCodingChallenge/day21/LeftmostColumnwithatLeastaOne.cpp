/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> a = binaryMatrix.dimensions();
        
        int n = a[0];
        int m = a[1];
        int ans=-1;
        int i=0;
        int j=m-1;
        
        while(i<n && j>=0){
            if(binaryMatrix.get(i,j)==1){
                if(ans==-1){
                    ans=j;
                }
                else{
                    ans=min(ans,j);
                }
                j--;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};
