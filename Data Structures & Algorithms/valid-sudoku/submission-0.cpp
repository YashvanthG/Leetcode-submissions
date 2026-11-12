class Solution {
public:
    bool check_box(int i,int j,vector<vector<char>>& board){
        int f[10]={0};
        for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){
                if(isdigit(board[i+x][y+j]))f[board[i+x][y+j]-'0']++;
            }
        }
        for(int k=0;k<10;k++)if(f[k]!=0&&f[k]!=1)return false;
        return true;
    }
    bool check_row(int i,int j,vector<vector<char>>& board){
        int f[10]={0};
        for(int l=0;l<9;l++)if(isdigit(board[l][j]))f[board[l][j]-'0']++;
        for(int k=0;k<10;k++)if(f[k]!=0&&f[k]!=1)return false;
        return true;
    }
    bool check_col(int i,int j,vector<vector<char>>& board){
        int f[10]={0};
        for(int l=0;l<9;l++)if(isdigit(board[i][l]))f[board[i][l]-'0']++;
        for(int k=0;k<10;k++)if(f[k]!=0&&f[k]!=1)return false;
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(i%3==0 && j%3==0)if(!check_box(i,j,board))return false;
                if(i==0)if(!check_row(i,j,board))return false;
                if(j==0)if(!check_col(i,j,board))return false;
            }
        }
        return true;
    }
};
