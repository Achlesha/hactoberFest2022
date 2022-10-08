//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<iostream>
using namespace std;

int main(){

    int n, sum = 0, prod = 1, diff;
    cin >> n;

    while(n > 0){
        int temp = n % 10;
        sum += temp;
        prod *= temp;
        n /= 10;
    }
    diff = prod - sum;
    cout << diff ;

}