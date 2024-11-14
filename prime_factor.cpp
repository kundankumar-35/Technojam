#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> primeFactors;
    

    for (int i = 2; i<=n; ++i){

        while(n%i==0){

            primeFactors.push_back(i);
            n /= i;
        }
    }

    cout << "primeFactors of given number:  " << endl;

    for(auto x : primeFactors)
        cout << x << " ";
}