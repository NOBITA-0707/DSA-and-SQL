class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        set<int> st;
        

        for(int i=0;i<nums.size();i++){
            st.clear();
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                int dist = st.size();
                sum = sum + pow(dist,2);
               
            }
        }

        return sum;
    }
};