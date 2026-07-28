#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        string vowel="aeiouAEIOU";
        int start=0,end=s.size()-1;
        if(s.size() == 0) return s;
        while(start<end){
            while(start<end && vowel.find(s[start])==string::npos){
                start++;
            }
            while(start<end && vowel.find(s[end])==string::npos)
            end--;

            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};