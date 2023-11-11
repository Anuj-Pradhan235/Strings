#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        int i=0,j=str.length()-1;
        while(i<j)swap(str[i++],str[j--]);
        return str;
    }
};