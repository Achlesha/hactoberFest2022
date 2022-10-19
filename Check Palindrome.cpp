// all coding is done on c++ language 
#include<bits/stdc++.h> 
using namespace std;

// cheking bool codition to find wether it is Palindrome or not

bool checkPalindrome(char str[]) {
       for(int i=0;i<= strlen(str)/2;i++)
           if(str[i]!=str[strlen(str)-1-i])
               return false;
    
    return true;
    
    }  
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}

//after compilation check for the inputs given below
// Sample Input 1 :
// abcdcba
// Sample Output 1 :
// true 
// Sample Input 2:
// coding
// Sample Output 2:
// false

