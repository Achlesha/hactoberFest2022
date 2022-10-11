/*
Problem statement: Search a element in a given array using binary search
Input:
6
8 2 1 4 6 9
1
Output:
Element found at index: 2
*/

// Time complexity : O(log(n)), where n = size of array

// Linear Search in C++

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    
    int s = 0;
    int e = n-1;

    while(s<=e) {
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter size of array : ");
    cin>>n;

    int arr[n];
    printf("Enter Array elements : \n");
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    printf("Enter element to search in an array : ");
    cin>>key;

    cout<<"Element found at index : "<<binarySearch(arr,n,key);

    return 0;
}