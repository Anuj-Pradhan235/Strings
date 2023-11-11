#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isSortedAndRotated(vector<int>&arr,int n){
        int cnt=0;
        for(int i=1;i<n;i++){
            if(arr[i-1]<arr[i])cnt++;
        }
        if(arr[0]<arr[n-1])cnt++;
        return cnt<=1;
    }
};