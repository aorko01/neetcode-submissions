class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int count[9]={0};
        for(int i=0;i<9;i++)
        {
            for(int k=0;k<9;k++)
            count[k]=0;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.' && count[board[i][j]-1-'0']>0)
                return false;
                if(board[i][j]!='.')
                count[board[i][j]-1-'0']++;
            }
        }
        for(int i=0;i<9;i++)
        {
            for(int k=0;k<9;k++)
            count[k]=0;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.' && count[board[j][i]-1-'0']>0)
                return false;
                if(board[j][i]!='.')
                count[board[j][i]-1-'0']++;
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int z=0;z<9;z++)
                count[z]=0;
                for(int k=0;k<3;k++)
                {
                    for(int m=0;m<3;m++)
                    {
                        if(board[i*3+k][j*3+m]!='.' && count[board[i*3+k][j*3+m]-1-'0']>0)
                        return false;
                        if(board[i*3+k][j*3+m]!='.')
                        count[board[i*3+k][j*3+m]-1-'0']++;
                    }
                }
            }
        }
        return true;
    }
};
