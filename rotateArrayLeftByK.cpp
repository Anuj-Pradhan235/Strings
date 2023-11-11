#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void roateArrayByLeft(vector<int>&arr,int n,int k){
        k%=n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end()-k);
        reverse(arr.end()-k,arr.end());
    }
};