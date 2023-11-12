#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(auto i:s){
            if(!st.empty()){
                if(st.top()==i){
                    st.pop();
                }
                else{
                    st.push(i);
                }
            }
            else st.push(i);
        }
        string temp="";
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;

    }
};