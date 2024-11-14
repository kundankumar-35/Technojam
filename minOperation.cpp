#include <bits/stdc++.h>
using namespace std;

// Precompute powers of k up to a reasonable limit
vector<long long> precomputePowers(int k, long long limit)
{
    vector<long long> powers;
    long long power = 1;
    while (power <= limit)
    {
        powers.push_back(power);
        // Avoid overflow
        if (power > LLONG_MAX / k)
            break;
        power *= k;
    }
    return powers;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        int k;
        cin >> n >> k;

        // Precompute powers of k up to n
        vector<long long> powers = precomputePowers(k, n);

        int cnt = 0;
        // Greedily subtract the largest power of k from n
        while (n > 0)
        {
            // Find the largest power of k <= n using binary search
            auto it = upper_bound(powers.begin(), powers.end(), n);
            --it; // move to the largest power of k that is <= n

            n -= *it;
            cnt++;
        }
        cout << cnt << endl;
    }
}
