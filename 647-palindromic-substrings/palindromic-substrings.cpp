class Solution {
public:
    int t[1001][1001];
    bool palindrome(string s,int i,int j){
        if(t[i][j] != -1){
            return t[i][j];
        }

        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return t[i][j] = true;
    }
    int countSubstrings(string s) {
        memset(t,-1,sizeof(t));
        int cnt  = 0;

        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){

                if(palindrome(s,i,j)){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};