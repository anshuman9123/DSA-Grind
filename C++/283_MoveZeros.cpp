#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       //if non-zero encounter swap kar do to left postion
       //zero encounter ignore;

       int i=0;

       for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
       }
    }
};