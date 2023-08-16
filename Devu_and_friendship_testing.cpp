#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int , int > mp;
        for(int i = 0; i < n ; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        
        // int count = 0;
        // for( auto &it : mp){
        //     if(it.second == 1) count++;
        // }
        if(mp.size() == 1){
            cout << 1 << endl;
        }else{
            cout << mp.size() << endl;
        }
    }
}