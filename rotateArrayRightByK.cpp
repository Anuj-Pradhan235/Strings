#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    void rotateArrayByRight(vector<int>&arr,int n,int k){
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=arr[i];
        }
        for(int i=0;i<n;i++)arr[i]=temp[i];
    }
};