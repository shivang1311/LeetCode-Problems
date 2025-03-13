class Solution {
public:
    // shivang agrawal
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        int m = grid[0].size();
        vector<vector<bool>>visited(n ,vector<bool>(m,false));
        queue<pair<int, int>>q;
        vector<int>dx = {0,0,1,-1};
        vector<int>dy = {1,-1,0,0};
        int maxArea =0;
        for(int i =0;i<n;i++ ){
            for(int j =0;j<m;j++){
                if(grid[i][j] ==1 && !visited[i][j]){
                    q.push({i ,j});
                    visited[i][j]= true;
                    int area = 0;
                    while(!q.empty()){
                        auto[x ,y] = q.front();
                        q.pop();
                        area++;
                        for(int k =0;k<4;k++){
                            int new_X = x +dx[k];
                            int new_Y = y + dy[k];
                            if(new_X>=0 && new_X<n && new_Y>=0 && new_Y<m &&
                             grid[new_X][new_Y]&& !visited[new_X][new_Y]){
                                q.push({new_X ,new_Y});
                                visited[new_X][new_Y] = true;

                             }
                        }
                    }
                    maxArea = max(area ,maxArea);
                }
            }
        }
        return maxArea;
        
    }
};