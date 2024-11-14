#include <bits/stdc++.h>
using namespace std;


int main()
{

    vector<int> arr = { 4,3,2,1,0};

    // [ 1, 0, 2, 3, 4 ];

    // [2,0,1]  test cases fail why check

    int n = arr.size();

    int cnt = 0;

    for (int i = 0; i<n ; i++){
        cnt++;

        int j = i + 1;

        while(j<n && arr[j]<arr[i])
            j++;

        i = j-1;    // update i to j

        // while (i < n - 1 && arr[i + 1] < arr[i]) // skip  All lesser element
        //     i++;
            
        // cnt++;
        }


        // corner case for last element
        // if(arr[n-1]>arr[n-2])   // if last element greater than second last element then increase cnt
        //     cnt++;

    cout << cnt;
}