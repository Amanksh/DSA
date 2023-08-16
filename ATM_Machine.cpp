#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t; 
    cin >> t ;
    while(t--){
        int n , money;
        cin >> n >> money;

        for(int i = 0; i < n ; i++){
            int x;
            cin >> x;
            if(money >= x){
                cout << 1;
                money -= x;
            }else{
                cout << 0;
            }
        }
        cout << endl;
    }
}