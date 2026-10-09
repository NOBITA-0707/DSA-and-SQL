class Solution {
public:
    int dp[1001][1001];
    int solve(const string &s, const string &t, int i, int j){

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        if(j==t.size()){
            return dp[i][j] = 1;
        }

        if(i==s.size()){
            return dp[i][j] = 0;
        }

        int match = 0;
        
        if(s[i]==t[j]){
            match = solve(s,t,i+1,j+1) +  solve(s,t,i+1,j);
        }
        else{
           match = solve(s,t,i+1,j);
        }

        return dp[i][j] = match;
    }
    int numDistinct(string s, string t) {

        memset(dp,-1,sizeof(dp));

        return solve(s,t,0,0);
    }
};