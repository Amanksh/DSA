#include <bits/stdc++.h>
using namespace std;

int digit_in_factorial(int N){
     double res =0;
        for(int i =2 ; i<=N;i++){
            res += log10(i);
        }
        return floor(res) + 1;
}
int main(){
     int N;
     cin >> N;
     cout << digit_in_factorial(N);
}