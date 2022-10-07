#include <iostream>

using namespace std;

int firstOcc(int arr[],int idx,int n,int key)
{
    if(idx == n)
        return -1;
        
    if(arr[idx] == key)
        return idx;
        
    return firstOcc(arr,idx+1,n,key);
}

int lastOcc(int arr[],int idx,int n,int key)
{
    if(idx == n)
        return -1;
        
    int last = lastOcc(arr,idx+1,n,key);
    
    if(last != -1)
        return last;
        
    if(arr[idx] == key)
        return idx;
        
    return -1;
}

int main()
{
    int arr[] = {4,2,5,1,2,8,2,0};
    cout<<"1st occ: "<<firstOcc(arr,0,8,2)<<" last occ: "<<lastOcc(arr,0,8,2);
    return 0;
}
