#include <bits/stdc++.h>
using namespace std;

// this question we already solve
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<pair<int,int>> edges(n);
        for (auto &x : edges)
            cin >> x.first>>x.second;

        int q;
        cin >> q; // number of assumptions

        vector<pair<int, int>> assumptions(q);
        for(auto &it : assumptions){
            cin >> it.first >> it.second;
        }
    }
}
