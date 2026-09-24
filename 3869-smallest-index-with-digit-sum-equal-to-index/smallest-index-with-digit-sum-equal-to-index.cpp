class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            int digit = nums[i];
            int sum = 0;
            while(digit>0){
                sum = sum + digit % 10;

                digit = digit/10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};