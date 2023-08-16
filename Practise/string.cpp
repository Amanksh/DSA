#include <bits/stdc++.h>
using namespace std;


bool searchPattern(string str, string pat)
    {
    // your code herei
    int size = pat.size();
    
    for(int i = 0 ; i < str.size(); i++){
        
        int left = i;
        int right = i + size -1;
        if(right > str.size()) right = str.size() -1;
        string str1;
        for(int i = left ; i <= right ;i++){
            str1.push_back(str[i]);
        }
        cout << str1 << endl;
        if(str1 == str){
            cout << "found";
            return true;
        }
        
    }
    return false;
    }
int main(){ 



    

    searchPattern("abcdefh" , "bcd");

 }