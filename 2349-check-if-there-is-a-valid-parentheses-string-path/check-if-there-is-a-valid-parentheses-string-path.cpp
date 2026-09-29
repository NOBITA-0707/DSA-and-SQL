class Solution {
public:
    int n;
    int m;
    int t[101][101][201];

    bool solve(int i,int j,int openCount,vector<vector<char>>& grid){
         
        openCount += (grid[i][j]=='(')? 1 : -1;

        if(openCount<0){
            return false;
        }

        if(t[i][j][openCount] != -1){
            return t[i][j][openCount];
        }
        

        if(i==n-1 && j==m-1){
            return t[i][j][openCount] = (openCount == 0);
        }

        if(i+1<n){
            if(solve(i+1,j,openCount,grid)){
                return t[i][j][openCount] = true;
            }
        }

        if(j+1<m){
            if(solve(i,j+1,openCount,grid)){
                return t[i][j][openCount] = true;
            }
        }

        return t[i][j][openCount] = false;

    }


    bool hasValidPath(vector<vector<char>>& grid) {
        memset(t,-1,sizeof(t));

        n = grid.size();
        m = grid[0].size();

        if( (m+n-1) %2 !=0){
            return false;
        }

        if(grid[n-1][m-1]== '(' || grid[0][0]==')'){
            return false;
        }



        return solve(0,0,0,grid);
    }
};