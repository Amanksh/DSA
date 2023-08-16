#include <bits/stdc++.h>
using namespace std;
int main(){  

    int t;
    cin >> t;
    while(t--){
        int n , x;
        
        cin >> n >> x;
        int X = x;
        string str;
        cin >> str;
        int count  =1;
        for(int i= 0 ; i< str.size() ;i++){
            if( str[i] == 'R') {
                count++;
                x++;
            }else if( str[i] == 'L'){
                count--;
                x--;
            }else if(X == x){
                count -= 2;
            }
        }
        cout << count << endl;
    }
}