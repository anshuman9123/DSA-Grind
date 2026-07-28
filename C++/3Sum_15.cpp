#include<iostream>
#include<vector>
using namespace std;
 class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n=nums.size();

      //sorting of array
      sort(nums.begin(),nums.end());

      //create vector for final answer
        vector<vector<int>>answer;

        for(int i=0;i<n;i++){

            //initializing 2 pointer j and k
            int j= i+1;
            int k= n-1;

        //condition for not repeating same value of i again
        if(i>0 && nums[i]==nums[i-1])
        continue;

        while(j<k)
        {
            int sum=nums[i]+ nums[j] + nums[k];

            
            if(sum==0){ //answer find then add elemnts in answer vector

            answer.push_back({nums[i],nums[j],nums[k]});  
            
            
//for findind duplicates elements next index pe jisse pehle hi answer aa chuka h J ke liye
            while(j<k && nums[j]==nums[j+1]){
                j++;
            }

           //for findind duplicates elements next index pe jisse pehle hi answer aa chuka h J ke liye
             while(j<k && nums[k]==nums[k-1]){ 
                k--;
            }

            j++;//actual pointer move horee for finding next solution
            k--;

            }

            else if(sum>0){
                k--;
            }
            else{
                j++;
            }
            
        }

            
        }

        return answer;
    }
};