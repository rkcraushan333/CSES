#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_set<int> h;
    int i = 0, j = 0, res = 1;
    while (j < n)
    {
        if (h.count(v[j]))
        {
            while (h.count(v[j]))
            {
                h.erase(v[i++]);
            }
        }
        m.insert(v[j++]);
        res = max(res, h.size());
    }
    cout << res;
    return 0;
}