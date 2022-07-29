#include <bits/stdc++.h>
using namespace std;

// by inforkc
vector<int> adj[100001];
vector<bool> vis(100001);
stack<int> temp;
bool dfs() {}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if (!dfs())
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        vector<int> a;
    }
    return 0;
}