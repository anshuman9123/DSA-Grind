#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int low=0,high=0,sum=0;
    int result= INT_MAX;

    int size=nums.size();

    while(high<size){
        sum=sum+nums[high];

        while(sum>=target){
            int len=(high-low+1);
            result=min(result,len);
            //target aane pe ab hmko shrink karna pdega taki pehle length se            kam ka mil jaaye.
            sum=sum-nums[low];
            low++;
        }

        high++;
        
        }
    return (result==INT_MAX) ? 0: result;
    }
};