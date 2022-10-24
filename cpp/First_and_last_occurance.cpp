#include <iostream>
using namespace std;
int firstocc(int even[],int n,int key) {
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e) {
        if(even[mid]==key) {
            ans=mid;
            e=mid-1;
        }
        else if(even[mid]<key) {
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int even[],int n,int key) {
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e) {
        if(even[mid]==key) {
            ans=mid;
            s=mid+1;
        }
        else if(even[mid]<key) {
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    cout << "This is my Change in code" << endl;
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};
    cout <<"first occurrence of 3 is at index "<< firstocc(even,11,3) << endl;
    cout <<"last occurrence of 3 is at index "<< lastocc(even,11,3) << endl;
}
