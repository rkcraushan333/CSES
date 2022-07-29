#include <bits/stdc++.h>
using namespace std;

// by inforkc    int count = 0;
vector<vector<bool>> vis(1001, vector<bool>(1001, 0));
int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
bool isvalid(int a, int b, int n, int m)
{
    if (a < 0 || b < 0 || a > n - 1 || b > m - 1)
        return false;
    if (vis[a][b])
        return false;
    return true;
}
void dfs(vector<vector<char>> &v, int i, int j, int n, int m)
{
    vis[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        if (isvalid(i + dx[k], j + dy[k], n, m))
        {
            int newX = i + dx[k], newY = j + dy[k];
            if (v[newX][newY] == '.')
            {
                vis[newX][newY] = 1;
                dfs(v, newX, newY, n, m);
            }
        }
    }
}
int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<char>> v;
    vector<char> temp(m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> temp[j];
        }
        v.push_back(temp);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.' && vis[i][j] == 0)
                cnt++, dfs(v, i, j, n, m);
        }
    }
    cout << cnt << endl;
    return 0;
}