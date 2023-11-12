#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool isMatch(unordered_map<char,int>&freq1,unordered_map<char,int>&freq2){
        for(char ch='a';ch<='z';ch++)if(freq1[ch]!=freq2[ch])return 0;
        return 1;
    }    
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        int windowSize=s1.length();
        for(int i=0;i<windowSize;i++)freq1[s1[i]]++;
        int j=0;
        while(j<s2.length()&&j<s1.length())freq2[s2[j++]]++;
        if(isMatch(freq1,freq2))return 1;
        while(j<s2.length()){
            //removal
            int index=j-windowSize;
            char ch=s2[index];
            freq2[ch]--;
            //addition
            freq2[s2[j]]++;
            j++;
            if(isMatch(freq1,freq2))return 1;
        }
        return 0;
    }
};