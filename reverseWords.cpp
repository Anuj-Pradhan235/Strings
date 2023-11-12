#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string S) 
    { 
        string temp="";
        string res="";
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]=='.'){
                reverse(temp.begin(),temp.end());
                res=res+temp;
                res.push_back('.');
                temp.erase();
            }else{
                temp.push_back(S[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        res=res+temp;
        return res;
    } 
};
