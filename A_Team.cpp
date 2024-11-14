#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int solved = 0;

    while(n--){
        int f, s, t;
        cin >> f >> s >> t;

        //  f==0 && s==0 || f==0 && t==0 || s==0 && t==0  this is old technique
        if(f+s+t>1){
            solved += 1;
        }
    }

    cout << solved << endl;
}