#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x , y ,r;
	    cin >> x >> y >>r ;
	    int totalSticks = x + (r/30);
	    
	    int totalPlates = ceil(totalSticks / y);
	    if(totalPlates * y >= totalSticks){
	        cout << totalPlates << endl;
	    }else{
	        cout << totalPlates + 1 << endl;
	    }
	    
	}
	return 0;
}