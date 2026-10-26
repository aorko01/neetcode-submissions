class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k>nums.size())
        return {};
        int left=0;
        vector<int> maxi;
        deque<int> dq;
        for(int right=0;right<nums.size();right++)
        {
            while(!dq.empty() && dq.front()<left)
            {
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<=nums[right])
            {
                dq.pop_back();
            }
            dq.push_back(right);
            if(right>=k-1)
            {
                maxi.push_back(nums[dq.front()]);
                left++;
            }
        }
        return maxi;
    }
};