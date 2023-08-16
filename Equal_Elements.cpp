#include <bits/stdc++.h>
using namespace std;
int main(){  

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i =0 ;i < n ;i++){
            cin >> arr[i];
        }

        int first = arr[0];
        int count = 0;
        for(int i =1 ;i < n ;i++){
            if(arr[i] != first){
                count++;
            }
        }

        cout << count << endl;
    }
}