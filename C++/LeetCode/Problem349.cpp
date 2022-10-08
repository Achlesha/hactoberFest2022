/*
349. Intersection of Two Arrays

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void readArray(vector<int> array){
    for(int i = 0; i < array.size(); i++){
        int input;
        cin >> input;
        array.push_back(input);
    }
}

vector<int> intersection(vector<int> &array1, vector<int> &array2){
    vector<int> ans;
    for(int i = 0; i < array1.size(); i++){
        int temp = array1[i];
        for(int j = 0; j < array2.size(); i++){
            if(temp == array2[j]){
                ans.push_back(temp);
                array2[j] = INT_MIN;
            }
        }
    }
    return ans;
}

int main(){
    
    vector<int> ans, array, array2;
    readArray(array);;
    readArray(array2);

    ans = intersection(array, array2);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    
    
}