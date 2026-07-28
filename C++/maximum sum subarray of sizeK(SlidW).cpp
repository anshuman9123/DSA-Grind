#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int size=arr.size();
         int low=0,high=k-1;
         int sum=0;
         for(int i=0;i<=high;i++){
             sum=sum+arr[i];
         }
         
         int res=sum;
         
        //  while(high<=size-1)
        // Jab high == size - 1 hoga:
        // Condition true hogi
        // Phir high++ hoga
        // high ban jayega size
        // arr[high] → ❌ Out of bounds (Runtime error)
            while(high<size-1){             
             high++;
             sum= sum-arr[low]+arr[high];
             low++;
           
             
            res=max(res,sum);
         }
         
         return res;
    }
};