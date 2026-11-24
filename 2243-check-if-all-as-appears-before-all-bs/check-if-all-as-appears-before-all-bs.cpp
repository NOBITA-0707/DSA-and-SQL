class Solution {
public:
    bool checkString(string s) {
        int cnt = 0;
        for(char c : s){
            if(c=='b'){
                cnt++;
            }
            if( c=='a' && cnt>0 ){
                return false;
            }
        }

        return true;
    }
};