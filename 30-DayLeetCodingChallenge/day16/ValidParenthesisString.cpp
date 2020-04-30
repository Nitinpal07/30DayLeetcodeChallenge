class Solution {
public:
    bool checkValidString(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       int low=0;
       int high=0;
        
       for(int i=0;i<s.size();i++){
           
           if(s[i]=='('){
                   low++;
                   high++;
               }
           else if(s[i]==')'){
                   low--;
               if(low==-1){
                   low=0;
               } 
               high--;
               if(high==-1){
                   return false;
               }
               
           }
           else{
               low--;
               if(low==-1){
                   low=0;
               }
               high++;
           }
       }
      
        if(low==0){
             return true;
         }
        else{
            return false;
        }
        
    }
};
