#include<iostream>
#include<vector>
using namespace std;
class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        
       sort(arr, arr + n);
       long long count=0;
        
        for(int i=0;i<n-2;i++){
        
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
               
            long long closest=(arr[i]+arr[j]+arr[k]);

                
            if(closest>=sum)
            {
                    k--;
             }
                
                else {
                    // for(int x=j;x<k;x++){ //count += (k - j); --> yeh short form h iske wajh se time limit aati h
                    //     count++;
                    // }
                    count += (k - j);
                    
                    j++;
                }
    
        
        
        
            }
            
        }
    
    return count;
    }
};