#include <bits/stdc++.h>
using namespace std;
 
int removeElement(vector<int>& nums, int val) {
        int j = 0;
        int count =0;
        for(int i =0 ; i < nums.size(); i++){
            if(nums[i] == val){
                continue;
            }
            swap(nums[i], nums[j]);
            j++;
            count++;

        }
        for(auto it : nums){
        cout << it << " " ;
    }
        return count;
        
}

int main(){
    vector<int> nums = {3,2,2,3};
    removeElement(nums , 3);

    
}