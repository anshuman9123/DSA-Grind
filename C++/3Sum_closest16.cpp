#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    //step-1 sorting of array
    sort(nums.begin(),nums.end());

    int n=nums.size();

    //initialize closest sum with first three triplets
    int closestSum=nums[0]+nums[1]+nums[2];

    for(int i = 0; i < n; i++) {

            int j = i + 1;
            int k = n - 1;

            while(j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                // If current sum is closer to target, update answer
                if(abs(sum - target) < abs(closestSum - target)) {
                    closestSum = sum;
                }

                // Move pointers
                if(sum > target) {
                    k--;
                }
                else if(sum < target) {
                    j++;
                }
                else {
                    // Exact match found → best possible
                    return sum;
                }
            }
        }

        return closestSum;


    }
};