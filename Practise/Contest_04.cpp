#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
    int MAX = 1e+5;
    int arr[MAX] = {0};
    vector<int> nums;
    int n ;
    cin >> n;
    for(int i =0 ;i < n ;i++){
        int x;
        cin >> x;
        nums.push_back(x);
        arr[x]++;
    }
    int maxElement = *max_element(nums.begin(), nums.end());
    int maxPeople =0 , evenPeople = 0;
    for(int i =1 ; i<= maxElement; i++){
        if(arr[i] % 2 != 0){
            maxPeople++;
        }else if(arr[i] % 2 == 0){
            evenPeople++;
        }

    }

    if( maxPeople == 0){
        cout << evenPeople << endl;
    }else {
        cout << maxPeople << endl;
    }
    // cout << maxPeople << " " << evenPeople;
	return 0;
}
