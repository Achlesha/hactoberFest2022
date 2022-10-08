/*
7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits 
reversed. If reversing x causes the value to go outside the 
signed 32-bit integer range [-231, 231 - 1], then return 0
Input: x = 123
Output: 321
*/

#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int n, rev = 0;
    cin >> n;
    if(rev < (INT_MIN / 10) || rev > (INT_MAX / 10)){
        cout << 0 << endl;
    }else{
        while(n !=0) {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        cout << rev;
    }
}