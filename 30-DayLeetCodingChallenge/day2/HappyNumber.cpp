class Solution {
public:
     int square(int n){
            int x=n;
            int temp=0;
            while(x){
                temp += (x%10)*(x%10);
                x/=10;
            }
        return temp;
    }
    bool isHappy(int n) {
        
        map<int,int> m;
        while(true){
            int y = square(n);
            if(y==1){
                return true;
            }
            else if(m.find(y)!=m.end()){
                return false;
            }
            else{
                m[y]++;
                n=y;
            }
        }
        return false;
    }
};
