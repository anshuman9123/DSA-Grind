class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int nums_size=nums.size();
    int first=0,last=1;
    
    while(last<nums_size){
        if (nums[last]==nums[last-1]){
         last++;
        continue;   
        }
        first++;
        nums[first]=nums[last];
        last++;
    } 
    return first +1;  
    }
};