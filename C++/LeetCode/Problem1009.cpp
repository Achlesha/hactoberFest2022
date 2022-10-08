/*
1009. Complement of Base 10 Integer
The complement of an integer is the integer you get when you flip all the 
0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010"
 which is the integer 2.
Given an integer n, return its complement.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
        if (n == 0){
            cout << 1;
        }
        for (int i = 0; n > 0; i++){
            ans += !(n %2) * pow(2,i);
            n /= 2;
        }

        cout << ans;
}