#include <bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin >> N;
    int res = 0;

    for(int i= 5; i<=N ;i =i*5){
        res = res + N /i;
    }
    cout << res;
}