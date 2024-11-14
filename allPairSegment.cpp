#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        vector<long long > ratings(n);
        long long sum_of_smaller = 0;
        long long last_rating = 0;

        for (int i = 0; i < n; ++i){
            cin >> ratings[i];
        }

        // sort(begin(ratings), end(ratings));
        for (int i = 0; i < n-2; ++i){
            sum_of_smaller += ratings[i];
        }

        long long second_last = ratings[n - 2] - sum_of_smaller;
        last_rating = ratings[n - 1];

        cout << (last_rating - second_last)<<endl;
    }
}
