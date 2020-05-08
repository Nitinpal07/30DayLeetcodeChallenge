class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2){
            return true;
        }
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        double m;
        if((x2-x1)!=0){
            m=(y2-y1)/(x2-x1);
        }
        else{
            m=INT_MAX;
        }
       // cout<<m<<endl;
        for(int i=2;i<coordinates.size();i++){
            int tempx = coordinates[i][0];
            int tempy = coordinates[i][1];
            //cout<<tempx-x1<<" "<<tempy-y1<<endl;
            if((tempx-x1)==0 && m!=INT_MAX){
                return false;
            }
            else if((tempx-x1)==0 && m==INT_MAX){
                continue;
            }
            else if( ((double)(tempy-y1)/(tempx-x1)) != m){
                return false;
            }
        }
        return true;
    }
};
