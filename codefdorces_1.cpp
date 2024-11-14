#include <bits/stdc++.h>
using namespace std;

// Function to find if there's a common subsequence of length `mid` in both strings `s` and `t`
bool has_common_subsequence(const string &s, const string &t, int mid)
{
    int m = s.size(), n = t.size();
    for (int i = 0; i <= m - mid; ++i)
    {
        string sub_s = s.substr(i, mid);
        for (int j = 0; j <= n - mid; ++j)
        {
            if (sub_s == t.substr(j, mid))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;

        int left = 0, right = min(s.size(), t.size()), len_lcs = 0;

        // Binary search on the length of the LCS
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (has_common_subsequence(s, t, mid))
            {
                len_lcs = mid;
                left = mid + 1; // Try for a longer LCS
            }
            else
            {
                right = mid - 1;
            }
        }

        // Calculate minimum operations needed
        int result = s.size() + t.size() - 2 * len_lcs + 1;
        cout << result << endl;
    }

    return 0;
}
