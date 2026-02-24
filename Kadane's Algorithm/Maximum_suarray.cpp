#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int curr_sum=0,max_sum=INT_MIN;
       int size=nums.size();

       for(int i=0;i<size;i++){
        curr_sum +=nums[i];
        max_sum=max(curr_sum,max_sum);
        //kadanes algo
        if(curr_sum<0)
        curr_sum=0;
       }
       return max_sum; 
    }

    
};