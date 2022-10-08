/*
283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
*/

#include<bits/stdc++.h>
using namespace std;

void readArray(vector<int>& nums, int m){
    for(int i = 0; i < m; i++){
        int input;
        cin >> input;
        nums.push_back(input);
    }
}

void moveZero(vector<int>& nums){
    int i = 0;
    for(int j = 0; j < nums.size(); j++){

        if(nums.at(j) != 0){
            swap(nums.at(j), nums.at(i));
            i++;
        }
    }
}

void print(vector<int>& nums){

    for(auto i : nums){
        cout << i << " ";
    }
}

int main(){

    vector<int> nums;
    int size;
    cin >> size;
    readArray(nums, size);

    moveZero(nums);
    print(nums);

}
