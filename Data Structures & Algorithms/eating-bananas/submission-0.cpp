class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1,right=*max_element(piles.begin(),piles.end());
        while(left<right)
        {
            int mid=left+(right-left)/2;
            int curr=0;
            for(int p:piles)
            {
                curr+=ceil(p/(mid*1.0));
            }
            if(curr<=h )
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }
        }
        return right;

    }
};
