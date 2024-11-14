#include <bits/stdc++.h>
using namespace std;


// this question we already solve 
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;

        // Check if sorted or make it sorted based on the value of k
        string ans = (k == 1 && !is_sorted(arr.begin(), arr.end())) ? "NO" : "YES";
        

        cout << ans << endl;
    }
}
