#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int arr[] = {2,3,2,3,5};
    int hash[6] = {0};

    for(int i= 0 ; i< 5 ; i++){
        hash[arr[i]]++;
    }

    for(int i = 1 ; i <= 5 ; i++)
    {   
        cout << hash[i] << " "; 
    }

}