#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> arr(n);
        for(int &pos : arr)
            cin >> pos;
        

        vector<int> copy(arr);

        sort(arr.begin(), arr.end());


        // check the array accoruding to given condition
        // even number swap with even number and odd number swap with odd number

        string ans = "YES";
        for (int i = 0; i < n;i++){
            if(arr[i]%2 != copy[i]%2 ){
                  ans = "NO";
                  break;
            }
              
        }

        cout << ans << "\n";
    }
}