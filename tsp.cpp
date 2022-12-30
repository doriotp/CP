#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            v.push_back(make_pair(x, y));
        }

        sort(v.begin(), v.end());

        cout << v[0].first << v[0].second << endl;

        int totalmoves = abs(v[0].first - 0) + abs(v[0].second - 0);
        // cout<<totalmoves<<endl;

        for (int i = 0; i < v.size() - 1; i++)
        {

            // cout<<abs(v[i+1].first-v[i].first)+abs(v[i+1].second-v[i+1].second)<<endl;
            totalmoves += abs(v[i + 1].first - v[i].first) + abs(v[i + 1].second - v[i].second);
            // cout<<totalmoves<<endl;
        }

        totalmoves += abs(0 - v[v.size() - 1].first) + abs(0 - v[v.size() - 1].second);

        cout << totalmoves << endl;
    }
}