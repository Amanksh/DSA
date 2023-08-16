#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i =0 ; i< 8 ;i++){
            for(int i= 0; i< 8 ;i ++){
                char x;
                cin >> x;
                if(x != '.') cout << x;
            }
        }
        cout << endl;
    }
}