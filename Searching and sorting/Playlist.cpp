#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_set<int> s;
    s.insert(v[0]);
    int i = 0, j = 1, res = 1;
    while (j <= n)
    {
        if (s.count(v[j]))
        {
            s.clear();
            i++;
            s.insert(v[i]);
            j = i + 1;
        }
        else
        {
            s.insert(v[j]);
            j++;
            res = max(res, (int)s.size());
        }
    }
    cout << res << endl;
}

signed main()
{
    inforkc();
    return 0;
}