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

        // vector<int> arr(n);  // without using vector we solve this question like

        int ans = 0, lastStation = 0;
        // for (int &x : arr)
        //     cin >> x;

        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            ans = max(ans, a - lastStation);
            lastStation = a;
        }

            // int min_gas_tank = 0;


        // find max_distance between gas stations in trip
        // for (int i = 0; i < n - 1; i++){
        //     min_gas_tank = max(arr[i + 1] - arr[i] , min_gas_tank);
        // }

        // int last_gas_station = arr[n - 1];

        // round trip distance
        // int r_dist = 2 * abs(x - arr[n-1]);
        int roundDistance = 2 * (x - lastStation);

        // edges cases when only one gas station

        int one_dist = 0;

        // if(n==1){
        //     one_dist = arr[0];
        // }

         ans = max(ans, roundDistance);

        cout << ans << endl;
    }
}
