#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
       int ansIndex=0;
       int i=0;
       while(i<chars.size()){
           int j=i+1;
           while(j<chars.size()&&chars[i]==chars[j])j++;
           chars[ansIndex++]=chars[i];
           int cnt=j-i;
           if(cnt>1){
               string num=to_string(cnt);
               for(auto i:num)chars[ansIndex++]=i;
           }
           i=j;
       } 
       return ansIndex;
    }
};