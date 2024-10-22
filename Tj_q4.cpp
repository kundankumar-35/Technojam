#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int compress(vector<char> &chars)
{

    unordered_map<char, int> mp;
    vector<char> compre;

    for (int i = 0; i < chars.size(); i++){
        mp[chars[i]]++;
        if(mp[chars[i]]==1){
            compre.push_back(chars[i]);
        }
    }

    chars = compre;
    return compre.size();

    // unordered_set<char> st;
    // for (int i = 0; i <chars.size(); i++){
    //     if(st.find(chars[i]) != st.end()){
    //         chars.erase(chars.begin() + i);
    //     }else{
    //         st.insert(chars[i]);
    //     }
    // }

    // return st.size();
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newSize = compress(chars);
    cout << "New length: " << newSize << endl;
    for (int i = 0; i < newSize; i++)
    {
        cout << chars[i] << " ";
    }
    cout << endl;
    return 0;
}