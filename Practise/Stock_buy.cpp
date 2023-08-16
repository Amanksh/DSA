#include <bits/stdc++.h>
using namespace std;
int main(){
        int A[] = {4,2,2,2,4};
        int min = 0;
        int res = A[0];
        int minElement = A[0];
        int max = -1;
        for(int i =1 ; i < 5; i++){
            if(A[i] > res){
                max = i;
            }
            if(A[i] < minElement || i == 4){
                // ans.push_back(min);
                // ans.push_back(max);
                cout << min  << " "<< max << endl; 
                minElement =A[i];
                res = A[i];
                min = i;
                max = -1;
            }
        }
 }