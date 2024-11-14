#include <bits/stdc++.h>
using namespace std;

// this question we already solve
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;

        int min_val = INT_MAX;
        vector<int> candies(n);
        for (int index = 0; index < n; index++)  {

            cin >> candies[index];
            min_val = min(min_val, candies[index]);
        }

       

        int total = 0;
        for(int &candy : candies){
            total += candy - min_val;
        }

        cout << total << endl;
    }
}