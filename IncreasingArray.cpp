#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    string str;
    cin >> str;

    int count = 1 , max_count = 1;
    char prev = str[0];
    for (int i = 1; i < str.size(); i++){
        if(str[i]==prev){
            count++;
        }else{

            // if character occurence distroyed then new series start
            prev = str[i]; // update
            max_count = max(max_count, count);
            count = 1;  // update the count of new character
        }

        max_count = max(max_count, count);
    }

        cout << max_count;
}