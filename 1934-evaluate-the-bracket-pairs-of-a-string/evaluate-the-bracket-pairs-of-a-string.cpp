class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string> mp;
        for(auto &x : knowledge ){
            mp[x[0]] = x[1];
        }
        string result = "";

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                string temp = "";
                i++;

                while(s[i]!=')'){
                    temp += s[i];
                    i++;
                }
                if(mp.find(temp)!=mp.end()){
                    result += mp[temp];
                }
                else{
                    result += '?';
                }

            }
            else{
                result += s[i];
            }
        }

        return result;
    }
};