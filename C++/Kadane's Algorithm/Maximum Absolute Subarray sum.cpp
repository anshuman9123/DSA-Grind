#include<stdio.h>
#include<vector>
using namespace std;
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int currMaxSum = 0;   // current positive running sum
        int currMinSum = 0;   // current negative running sum

        int bestPositive = 0; // best positive subarray sum found
        int bestNegative = 0; // most negative subarray sum found

        for(int val : nums){

            // Kadane for maximum sum
            currMaxSum = max(val, currMaxSum + val);
            bestPositive = max(bestPositive, currMaxSum);

            // Kadane for minimum sum
            currMinSum = min(val, currMinSum + val);
            bestNegative = min(bestNegative, currMinSum);
        }

        return max(bestPositive, -bestNegative);
     
    }
};