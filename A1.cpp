#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; cin>>n;
   vector<int> arr(n+1);

   for (int i = 1; i <= n; i++ ){
       int temp;
       cin >> temp;
       arr[temp] = temp;
   }
       
   for (int i = 1; i <= n;i++){
    if(arr[i] != i){
            cout << i << endl;
            break;
    }
    
    
   }
  
   
}