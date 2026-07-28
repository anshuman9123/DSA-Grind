#include<stdio.h>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int prefix=1,suffix=1,max_sum=INT_MIN;
    int size=nums.size();

    for(int i=0;i<size;i++){
        if (prefix==0) prefix=1;

        if(suffix==0) suffix=1;
        
        prefix *=nums[i];

        suffix =suffix *nums[size-i-1];

        // if (prefix==0) prefix=1;

        // if(suffix==0) suffix=1;

        max_sum=max(max_sum,max(prefix,suffix));
        // if(cs<0)
        // cs=1;
    }
    return max_sum;
    }
};