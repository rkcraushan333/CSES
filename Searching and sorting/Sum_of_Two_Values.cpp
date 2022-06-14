#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int a, b;
    cin >> a >> b;
    unordered_map<int, int> m;
    for (int i = 1; i <= a; i++)
    {
        int k;
        cin >> k;
        m[k] = i;
    }
    for (auto i : m)
    {
        if (m.find(b - i.first) != m.end())
        {
            if (i.second != m[b - i.first])
            {
                cout << i.second << " " << m[b - i.first] << endl;
                return;
            }
        }
    }
    cout << "IMPOSSIBLE";
}

signed main()
{
    //     int t_e_s_t;
    //     cin>>t_e_s_t;
    //     while(t_e_s_t--)
    //     {
    inforkc();
    //     }
    return 0;
}