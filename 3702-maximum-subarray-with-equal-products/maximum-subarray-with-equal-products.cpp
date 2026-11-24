class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxi = 0;

        for(int i=0;i<nums.size();i++){
        long long prod = 1;
        long long l = nums[i];
        int g = nums[i];

            for(int j=i;j<nums.size();j++){
                prod = prod*nums[j];
                l = lcm(l,(long long)nums[j]);
                g = gcd(g,(long long)nums[j]);


                if(prod == l*g){
                    maxi = max(maxi, j-i+1);
                }

                 if(prod > 25200)
                    break;
                 
            

            }
        }

        return maxi;
    }
};