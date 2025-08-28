class Solution {
public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int DIRS[4][2] = {{-1,1},{1,1},{1,-1},{-1,-1}}; // NE, SE, SW, NW

        // memo[i][j][turned][needIdx][dir]
        vector memo(m, vector(n, array<array<array<int,4>,2>,2>{}));
        vector seen(m, vector(n, array<array<array<char,4>,2>,2>{}));

        auto dfs = [&](auto&& self, int i, int j, int turned, int needIdx, int dir) -> int {
            if (i < 0 || i >= m || j < 0 || j >= n) return 0;
            int need = needIdx ? 0 : 2; // expect 2,0 alternating
            if (grid[i][j] != need) return 0;

            auto &vis = seen[i][j][turned][needIdx][dir];
            auto &dp  = memo[i][j][turned][needIdx][dir];
            if (vis) return dp;
            vis = 1;

            int ni = i + DIRS[dir][0], nj = j + DIRS[dir][1];
            int nextNeedIdx = (need == 2 ? 1 : 0);
            int best = 1 + self(self, ni, nj, turned, nextNeedIdx, dir);

            if (!turned) {
                int dir2 = (dir + 1) % 4; // one clockwise turn
                int ti = i + DIRS[dir2][0], tj = j + DIRS[dir2][1];
                best = max(best, 1 + self(self, ti, tj, 1, nextNeedIdx, dir2));
            }
            return dp = best;
        };

        int ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) { // must start with 1
                    for (int d = 0; d < 4; ++d) {
                        int ni = i + DIRS[d][0], nj = j + DIRS[d][1];
                        ans = max(ans, 1 + dfs(dfs, ni, nj, 0, 0, d));
                    }
                }
            }
        }
        return ans;
    }
};
