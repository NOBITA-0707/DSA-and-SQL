class Solution {
public:
    int scoreOfParentheses(string s) {
       vector<int> v;
       v.push_back(0);

       for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                v.push_back(0);
            }
            else{
                if(s[i-1]=='('){
                    int score = v.back();
                    v.pop_back();
                    v.back() += score+1;
                }
                else{
                    int score = v.back();
                    v.pop_back();
                    v.back() += 2*(score);
                }
            }

       }

       return v.back();
    }
};