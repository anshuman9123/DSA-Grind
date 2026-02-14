#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
       int string_len=s.size();
       int start=0;
       int end=string_len-1;
    //    for(int start=0;start<string_len/2;start++){
    //     swap(s[start],s[end]);
    //     end--;
    //    }
    while(start<string_len/2){
        swap(s[start],s[end]);
        start++;
        end--;
    } 
    }
};