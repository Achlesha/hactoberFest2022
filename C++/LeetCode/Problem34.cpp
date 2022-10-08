/*
34. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/

#include<iostream>
using namespace std;

int readArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    
}

int firstOcc(int array[], int size, int target){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(array[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if( array[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return ans; 
}

int lastOcc(int array[], int size, int target){
    int start = 0;
    int end = size - 1;
    int ans = - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(array[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if( array[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return ans; 
}

int main(){
    int size, target;
    cin >> size;
    int array[size];
    readArray(array, size);
    cout << "Enter the target element : " << endl;
    cin >> target;

    cout << "Start index " << firstOcc(array, size, target) << endl;
    cout << "Last index " << lastOcc(array, size, target) << endl;

}