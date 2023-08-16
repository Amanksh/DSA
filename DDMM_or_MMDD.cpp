#include <bits/stdc++.h>
using namespace std;
int main(){ 

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int first = ( str[0] -'0') * 10 + (str[1] - '0');
        int second = ( str[3] -'0') * 10 + (str[4] - '0');
        // cout << ( str[0] -'0') * 10 + (str[1] - '0') << endl;

        if( first > 12){
            cout << "DD/MM/YYYY" << endl;
        }else if(second > 12){
            cout << "MM/DD/YYYY" << endl;
        }else{
            cout << "BOTH" << endl;
        }
    // }
}
}