#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int h=numbers.size()-1;
        vector<int>v;
        while(l<h)
        {
            if((numbers[l]+numbers[h]) > target)
              h--;
            else if((numbers[l]+numbers[h]) < target)
             l++;
            else{
              return{l+1,h+1};}
           
        }
        return{l+1,h+1};
    
    } 
};

int main()
{
    int target;
    cin>>target;
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i=0;i<n;i++)cin>>numbers[i];
    Solution obj;
    vector<int>result=obj.twoSum(numbers,target);
    for(int i=0;i<2;i++)cout<<result[i]<<" ";
}