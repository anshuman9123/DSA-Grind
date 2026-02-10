#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) count0++;

            else if(nums[i]==1) count1++;

            else count2++;
            
        }

        int idx=0;
        for(int j=0;j<count0;j++){
            nums[idx++]=0;
        } 
        for(int j=0;j<count1;j++){
            nums[idx++]=1;
        }        
        for(int j=0;j<count2;j++){
            nums[idx++]=2;
        } 

        
    }
};