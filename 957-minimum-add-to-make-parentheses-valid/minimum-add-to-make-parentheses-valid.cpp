class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s==""){
            return 1;
        }
        
        queue <char> q;
        int cnt =0;

        for(char c : s){
            if(c=='('){
                q.push(c);
            }
            else{
                if(q.empty()){
                    cnt++;
                }
                else if(q.front() != '('){
                    cnt++;
                }
                else{
                    q.pop();
                }
            }
        }

        if(!q.empty() && cnt>0){
            return cnt + q.size();
        }
        
        return (!q.empty())?q.size():cnt;
    }
};