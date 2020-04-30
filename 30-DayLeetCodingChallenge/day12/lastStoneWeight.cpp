class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)return stones[0];
        
        priority_queue<int> q;
        
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(!q.empty()){
            if(q.size()==1){
                break;
            }
            int t = q.top(); //cout<<t<<" ";
            q.pop();
            if(q.top()==t){
                q.pop();
            }
            else{
                int st = q.top();
                q.pop();
                q.push(t-st);
            }
            //cout<<endl;
        }
        if(q.empty()){
            return 0;
        }
        return q.top();
    }
};
