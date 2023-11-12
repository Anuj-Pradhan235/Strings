#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool checkPalindrome(string &str){
        int i=0,j=str.length()-1;
        while(i<j)if(str[i++]!=str[j--])return 0;
        return 1;
    }
};