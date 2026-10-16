class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int maxi_area=min(heights[left],heights[right])*(right-left);
        int curr_area=maxi_area;
        while(left<right)
        {
            if(heights[left]>heights[right])
            {
                right--;
                curr_area=min(heights[left],heights[right])*(right-left);
                maxi_area=max(curr_area,maxi_area);
                
            }
            else if(heights[right]>heights[left])
            {
                left++;
                curr_area=min(heights[left],heights[right])*(right-left);
                maxi_area=max(curr_area,maxi_area);
            }
            else
            {
                left++;
                // right--;
            }
        }
        return maxi_area;
    }
};
