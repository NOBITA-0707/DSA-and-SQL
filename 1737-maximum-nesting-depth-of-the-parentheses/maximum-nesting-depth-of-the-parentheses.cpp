class Solution {
public:
    int maxDepth(string s) {
        int depth =0;
       int maxii = 0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                depth++;
                maxii = max(maxii,depth);

            }
            else if(s[i]==')'){
                depth--;

            }
        }
         
        return maxii;
    }
};