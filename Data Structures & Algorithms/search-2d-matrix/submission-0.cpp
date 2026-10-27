class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=-1;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][n-1])
            {
                row=i;
                break;
            }
        }
        if(row==-1)
        return false;
        int left=0,right=n-1;
        while(left<=right)
        {
            int mid=left+ceil((right-left)/2.0);
            if(matrix[row][mid]==target)
            return true;
            else if(matrix[row][mid]<target)
            left=mid+1;
            else
            right=mid-1;
        }
        return false;
    }
};