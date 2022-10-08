/*
189. Rotate Array
Given an array, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
*/

#include<bits/stdc++.h>
using namespace std;

void readArray(vector<int>& nums, int size){
    for(int i = 0; i < size; i++){
        int input;
        cin >> input;
        nums.push_back(input);
    }
}

void print(vector<int>& nums){
    for(auto i: nums){
        cout << i << " ";
    }
}

void rotate(vector<int>& nums, int k){
    vector<int> temp(nums.size());

    for(int i = 0; i < nums.size(); i++){
        temp[(i + k) % nums.size()] = nums.at(i);
    }

    nums = temp;
}
int main(){
    int size;
    cin >> size;
    vector<int> nums;

    readArray(nums, size);
    int k;
    cin >> k;
    rotate(nums, k);
    print(nums);

}