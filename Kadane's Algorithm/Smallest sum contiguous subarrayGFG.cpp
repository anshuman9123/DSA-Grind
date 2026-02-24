#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int minm=INT_MAX;
        int curr=0;
        
        for(int i=0; i<a.size();i++){
            if(curr>=0)
             curr=0;
             
             curr +=a[i];
             
             minm=min(minm,curr);
             
             
        }
        return minm;
    }
};
