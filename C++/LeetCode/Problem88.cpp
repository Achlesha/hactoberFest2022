/*
88. Merge Sorted Array
Share
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 

Constraints:

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109
*/


#include<bits/stdc++.h>
using namespace std;

void readInput(vector<int>& nums1, int m){
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        nums1.push_back(a);
    }
}
void print(vector<int> result){
    for(int i: result){
        cout << i << " ";
    }
}
vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    int i = 0, j = 0;
    vector<int> ans;
    while(i < m - 1 && j < n - 1){
        if(nums1.at(i) < nums2.at(j)){
            ans.push_back(nums1.at(i++));
            
        }else{
            ans.push_back(nums2.at(j++));
        }
    }
    while(i < n){
        ans.push_back(nums1.at(i++));
    }
    
    while(j < m){
        ans.push_back(nums2.at(j++));
    }
    return ans;
}

int main(){
    int m;
    cin >> m;
    vector<int> nums1;
    int n;
    cin >> n;
    vector<int> nums2;
    readInput(nums1, m);
    readInput(nums2, n);

    print(merge(nums1, m, nums2, n));

}