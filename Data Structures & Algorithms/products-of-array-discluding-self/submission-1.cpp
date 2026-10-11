class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero_cnt = 0;
        for (int num : nums) {
            if (num == 0)
                zero_cnt++;
            else
                product *= num;
        }
        if (zero_cnt > 1) product = 0;
        vector<int> ans(nums.size(), product);
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i] == 0) {
                if (zero_cnt == 0)
                    ans[i] /= nums[i];
                else
                    ans[i] = 0;
            } 
            else if(zero_cnt>1)
                ans[i] = 0;
        }
        return ans;
    }
};
