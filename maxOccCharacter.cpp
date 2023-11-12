#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char ans='\0';
        map<char,int>freq;
        int maxi=INT_MIN;
        for(auto i:str){
            freq[i]++;
            maxi=max(maxi,freq[i]);
        }
        for(auto i:freq){
            if(i.second==maxi){
                ans=i.first;
                break;
            }
        }
        return ans;
    }

};