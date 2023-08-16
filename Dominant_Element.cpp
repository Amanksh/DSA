#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int > vec;
        for(int i =0 ; i < n; i++){
            int  x;
            cin >> x;
            vec.push_back(x);
        }
        int max = *max_element(vec.begin(), vec.end());
        int hash[max + 1] = {0};
        for(int i =0 ; i < n; i++){
            hash[vec[i]]++;
        }
        int maxFreq= vec[0];
        bool flag = false;
        for(int i = 1; i <= max ;i++){
            if(hash[vec[i]] > hash[maxFreq]){
                maxFreq = vec[i];
                flag = true;
            }else if(hash[vec[i]] == hash[maxFreq] && vec[i] != maxFreq){
              
                flag = false;
            }
        }

        if(flag) cout << "YES";
        else cout << "NO";
        cout << maxFreq << " " << flag << endl;
    
    }
}