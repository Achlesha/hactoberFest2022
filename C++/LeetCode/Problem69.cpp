/*
69. Sqrt(x)
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

 

Example 1:

Input: x = 4
Output: 2
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
*/
#include<iostream>
using namespace std;

long long int binarySearch(int number){
    int start = 0;
    int end = number;
    long long int ans;
    while(start <= end){
        int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if(number == square){
            return mid;
        }else if( number < square){
            end = mid - 1;
        }else {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int number, ans;
    cin >> number;
    ans = binarySearch(number);
    cout << ans << endl;
    return 0;

}