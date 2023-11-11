#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int>sumOfTwoArrays(vector<int>&num1,vector<int>&num2){
        vector<int>res;
        int i=num1.size()-1,j=num2.size()-1;
        int carry=0;
        while(i>=0 && j>=0){
         int sum=num1[i]+num2[j]+carry;
         carry=sum/10;
         sum=sum%10;
         res.push_back(sum);
         i--;
         j--;
        }
        while(i>=0){
        int sum=num1[i]+carry;
         carry=sum/10;
         sum=sum%10;
         res.push_back(sum);
         i--;
        }
        while(j>=0){
         int sum=num2[j]+carry;
         carry=sum/10;
         sum=sum%10;
         res.push_back(sum);
         j--;
        }
        while(carry){
        int sum=carry;
         carry=sum/10;
         sum=sum%10;
         res.push_back(sum);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};