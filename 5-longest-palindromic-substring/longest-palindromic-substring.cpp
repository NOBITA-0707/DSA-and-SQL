class Solution {
public:
    int dp[1001][1001];
    bool palindrome(const string &s,int i,int j){
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i>=j){
            return dp[i][j] = true;
        }
        if(s[i]==s[j]){
            return dp[i][j] = palindrome(s,i+1,j-1);
        }

        return dp[i][j] = false;
    }
    string longestPalindrome(string s) {
    memset(dp,-1,sizeof(dp));
       int n = s.size();
       string ans = "";
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                if(palindrome(s,i,j)==true){
                    if(j-i+1>maxi){
                        maxi = j-i+1;
                        ans = s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};