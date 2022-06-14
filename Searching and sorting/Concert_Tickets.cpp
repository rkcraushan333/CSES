#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    vector<int> v1(a);
    for (int i = 0; i < a; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    v1 = v;
    for (int x = 0; x < b; x++)
    {
        int t;
        cin >> t;
        if (t > v[a - 1] || t < v[0])
        {
            cout << -1 << endl;
            continue;
        }
        int k = lower_bound(v.begin(), v.end(), t) - v.begin();

        if (k > a - 1)
        {
            cout << -1 << endl;
            continue;
        }
        if (v[k] != t)
        {
            int i = k - 1;
            while (i >= 0 && v1[i] == -1)
                i--;
            if (i < 0)
                cout << -1 << endl;
            else
            {
                cout << v1[i] << endl;
                v1[i] = -1;
            }
        }
        else
        {
            if (v1[k] != -1)
            {
                cout << v1[k] << endl;
                v1[k] = -1;
            }
            else
            {
                int j = k + 1, i = k - 1;
                while (j < a && v1[j] == -1)
                {
                    j++;
                }
                if (j < a)
                {
                    if (v1[j] == t)
                    {
                        cout << v1[j] << endl;
                        return;
                    }
                }
                while (i >= 0 && v1[i] == -1)
                    i--;

                if (i < 0)
                    cout << -1 << endl;
                else
                {
                    cout << v1[i] << endl;
                    v1[i] = -1;
                }
            }
        }
    }
}

signed main()
{
    inforkc();
    return 0;
}