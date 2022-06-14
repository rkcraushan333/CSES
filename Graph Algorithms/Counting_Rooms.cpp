#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void dfs(vector<vector<char>> &grid, int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i > n || j > m)
        return;
    if (grid[i][j] == '#')
        return;
    grid[i][j] = '#';

    dfs(grid, i - 1, j, n, m);
    dfs(grid, i, j - 1, n, m);
    dfs(grid, i + 1, j, n, m);
    dfs(grid, i, j + 1, n, m);
}
int inforkc(vector<vector<char>> &grid)
{
    int n = grid.size(), m = grid[0].size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.')
            {
                dfs(grid, i, j, n - 1, m - 1);
                count++;
            }
        }
    }
    return count;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char k;
            cin >> k;
            v[i].push_back(k);
        }
    }
    cout << inforkc(v);
    return 0;
}