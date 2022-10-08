/*
231. Power of Two
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n, ans;
    bool flag = false;
    cin >> n;

    for(int i = 0; i <= 30; i++){
        ans = pow(2, i);

        if(ans == n){
            flag = true;
        }
    }
    if(flag){
        cout << "Power of two";
    }else{
        cout << "NOt the power of two";
    }

}