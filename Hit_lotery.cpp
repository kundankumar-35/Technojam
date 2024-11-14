#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    cin >> amount;

    vector<int> rupes{100, 20, 10, 5};

    int notes = 0;


    for(int rs : rupes){

        notes += amount / rs;
        amount = amount % rs;

        //      while(amount>=rs){
        //     int note = amount/ rs;
        //     int rm = amount% rs;
        //     notes+= note;
        //     amount = rm;
        // }

    }
    notes += amount;

    cout << notes << endl;
}

    // while (amount >= 20)
    // {
    //     int note = amount / 20;
    //     int rm = amount % 20;
    //     notes += note;
    //     amount = rm;
    // }
    // while (amount >= 10)
    // {
    //     int note = amount / 10;
    //     int rm = amount % 10;
    //     notes += note;
    //     amount = rm;
    // }
    // while (amount >= 5)
    // {
    //     int note = amount / 5;
    //     int rm = amount % 5;
    //     notes += note;
    //     amount = rm;
    // }
