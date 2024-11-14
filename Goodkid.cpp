#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;

        vector<int> digit(n);
        for (int i = 0; i < n; i++){
            cin >> digit[i];
        }


        // thisi question learn me how to find lowest number index in array

        // auto it = min_element(digit.begin(), digit.end());

        // int index = it -  digit.begin();
        // digit[index]++;

        int ans = 1;

        int min_ele = digit[0];

        for (int i = 1; i < n; i++)
        {
            if(digit[i]<min_ele){
                ans *= min_ele;
                min_ele = digit[i];
            }else{
                ans *= digit[i];
            }
        }
        ans *= min_ele + 1;
        cout << ans << endl;
    }
    
    
    
    }