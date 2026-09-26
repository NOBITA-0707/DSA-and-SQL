class Solution {
public:
    int t[501][501];
    int solve(const string& word1,const string& word2,int i,int j){
    int n = word1.size();
    int m = word2.size();
        
        if(i==n){
            return m-j;
        }
        if(j==m){
            return n-i;
        }

        if(word1[i]==word2[j]){
           return solve(word1,word2,i+1,j+1);
        }

        if(t[i][j]!=-1){
            return t[i][j];
        }

        int insert = 1 + solve(word1,word2,i,j+1);
        int Delete = 1 + solve(word1,word2,i+1,j);
        int replace = 1 + solve(word1,word2,i+1,j+1);

        return t[i][j] =  min({insert,Delete,replace});
    }

    int minDistance(string word1, string word2) {
        
        memset(t,-1,sizeof(t));

        return solve(word1,word2,0,0);
    }
};