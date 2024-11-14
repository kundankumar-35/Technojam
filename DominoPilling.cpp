#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sum;
    cin >> sum;
    int cnt = 0;

    int three = 0, two = 0, one = 0;
    // vector<int> visited(26, 0);
    for(char c : sum){

        if (isdigit(c))
        {
            c - '0' > 1 ? (c - '0' == 3 ? three++ : two++) : one++;
        }
    }

    string ans = "";
    while(one--){
        ans += "1+";
    }
    while(two--){
        ans += "2+";
    }while(three--){
        if(three==0){
            ans += "3";
        }else
            ans += "3+";
    }


    // remove last pluse sign
    if(ans.back()=='+')
        ans.pop_back();

    cout << ans;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string sum;
//     cin >> sum;

//     // Count occurrences of '1', '2', and '3'
//     int count[4] = {0}; // Array to store counts for '1', '2', and '3'
//     for (char c : sum)
//     {
//         if (isdigit(c))
//         {
//             count[c - '0']++; // Increment the count for the digit
//         }
//     }

//     // Construct the result by adding the numbers in sorted order
//     string ans;
//     for (int i = 1; i <= 3; i++)
//     {
//         ans += string(count[i], '0' + i); // Append each number 'count[i]' times
//         if (i < 3 && count[i] > 0)
//             ans += "+"; // Add "+" between groups
//     }

//     // Remove trailing '+' if present
//     if (ans.back() == '+')
//     {
//         ans.pop_back();
//     }

//     cout << ans;
// }
