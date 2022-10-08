/*
33. Search in Rotated Sorted Array
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
*/
#include<iostream>
using namespace std;

void readArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[size];
    }
}

int binarySearch(int array[], int s, int e, int target){
    int start = s;
    int end = e;

    while(start <= end){
        int mid = start + ( end - start) / 2;

        if(array[mid] == target){
            return mid;
        }else if(array[mid] >= target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int findPivot(int array[], int size){
    int start = 0, end = 0;

    for(int i = 0; i < size - 1; i++){
        end += array[i];
    }

    for(int i = 0; i < size - 1; i++){
        end -= array[i];
        if(i != 0){
            start += array[i];
        }
        if(start == end){
            return i;
        }
    }
    return -1;
}

int searchRotated(int array[], int size, int target){
    int pivot = findPivot(array, size);
    int index = -1;

    if(array[pivot] <= target && array[size - 1] >= target){
       index = binarySearch(array, pivot, size - 1, target);
    }else{
       index = binarySearch(array, 0, pivot - 1, target);
    }
    return index;
}

int main(){
    int size, target;
    cin >> size;
    int array[size];
    cout << "Enter the Elements : " << endl;
    readArray(array, size);
    cout << "Enter the Target : " << endl;
    cin >> target;
    cout << "Found At index : " << searchRotated(array, size, target);




}