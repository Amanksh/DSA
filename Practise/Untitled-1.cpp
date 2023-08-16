#include <bits/stdc++.h>
using namespace std;

// Micros ----------------------------
#define ll == long long;
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()
#define dbg(x) cout << #x << ' ' << x << '\n';

//-------------------------------------


void solve(int arr[], int n , int x){
	int low = 0 , high = n -1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == x){
			if(mid != 0 && arr[mid -1] == x){
				high = mid -1;
			}else{
				cout << mid;
				break;
			}
		}else if(arr[mid] > x ){
			high = mid -1;
		}else{
			low = mid + 1;
		}
	}
	
	
}

signed main(){
	int t;
	cin >> t;
	
	while(t--){
		int n ,x;
		cin >> n;
		cin >>x;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		solve(arr , n , x );
		
	}
}