class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;

        for(int i = 26;i>=1;i--){
            mp['a' + (26-i)] = i;

        }

        int idx = 1;
        int sum = 0;
        for(auto &p:s){
            sum = sum + mp[p]*idx;
            idx++;
        }

        return sum;
    }
};