#include <bits/stdc++.h>
using namespace std;

long long find_minimum_n(long long k)
{
    long long left = 1, right = k * k;
    long long answer = right;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long perfect_squares = (long long)sqrt(mid);

        if (perfect_squares >= k)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return answer;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k;
        cin >> k;
        cout << find_minimum_n(k) << endl;
    }
    return 0;
}
