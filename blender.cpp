#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        // number of fruits avaiilable of zhan
        int fruits , x, y;
        cin >> fruits>>x>>y;
            // x is capacity of blender
            // y zhan put per second in blender
        

        int time = fruits / min(x, y);
        int remaing = fruits % min(x, y);
        remaing ? cout << time + 1<<endl : cout << time<<endl;
    }
}