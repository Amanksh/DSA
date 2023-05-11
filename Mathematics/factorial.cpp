#include <bits/stdc++.h>
using namespace std;

 int digitsInFactorial(int N)
    {
        // code here
        long long res =1;
        for(int i =2 ; i<=N;i++){
            res *= i;
        }
        int count = 0;
        cout << res << endl;
        while(res != 0){
            count++;
            res = res/10;
            cout << count << endl;
            
        }
        return count;
    }

int main(){
    int N;
    cin >> N;
    cout << digitsInFactorial(N);
}