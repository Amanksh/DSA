#include <bits/stdc++.h>
using namespace std;
int main(){ 
    vector<int> nums = {9};

    int sum = 0;
    for(auto it : nums){
        sum = sum * 10 + it;
    }
    sum++;
    cout << sum << endl;

    vector<int> ans;
    int digit =0;
    while(sum){
        digit = sum % 10;
        ans.push_back(digit);
        sum = sum / 10; 
    }
    reverse(ans.begin(), ans.end());
    // sort(ans.begin(), ans.end());
    for(auto it : ans){
        cout << it << " ";
    }


 }