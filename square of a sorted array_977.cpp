#include<stdio.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int size=nums.size();
    
        vector<int>negative,positive;

      // seperating negative and positive
      for(int i=0;i<size;i++){
        if(nums[i]<0){ //negative element
            negative.push_back(nums[i]);

        }
        else  {
               //positive element
        positive.push_back(nums[i]);   
        }   
      }
    
    //squaring positive and negative

      
        for(int i=0;i<positive.size();i++){
            positive[i]=positive[i]*positive[i];
            
        }
      
      
      for(int i=0;i<negative.size();i++){
       negative[i]=negative[i]*negative[i]; 
       
      }
      reverse(negative.begin(),negative.end());

      //merge both using 2 pointer
      int i=0,j=0; 
       //i->negative j->positive
      vector<int>result;
    while(i<negative.size() && j<positive.size()){
        if(negative[i]<=positive[j]){
            result.push_back(negative[i]);
            i++;
        }
        else{
          result.push_back(positive[j]);
          j++;

        }
    }
        while(i<negative.size()){
            result.push_back(negative[i]);
            i++;
        }

          while(j<positive.size()){
            result.push_back(positive[j]);
            j++;
        }
       
    
      return result;

        
    }
};