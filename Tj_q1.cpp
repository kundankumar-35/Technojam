#include <iostream>
#include <vector>
using namespace std;

void generatePascalTriangle(int n)
{
    // write your code here
    // this is solve using dp
    vector<vector<int>> dp(n);

    dp[0].push_back({1});

    for (int i = 1; i<n  ; i++){

        dp[i].resize(i + 1, 0);
        for(int j=0 ; j<=i ; j++){
            if(j==0 || j==i){
                dp[i][j] = 1;  // first and last element is one
            }else{
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i<dp.size();  i++){
        for (int j = 0; j < dp[i].size(); j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    generatePascalTriangle(n);
    return 0;
}