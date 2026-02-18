#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int size=s.length();
        
        unordered_map<char,int> f;
        
        int low=0,res=-1;
        
        for(int high=0;high<size;high++){
            f[s[high]]++;
            
            
        
                while(f.size()>k){
                    f[s[low]]--;
                    if(f[s[low]]==0){
                        f.erase(s[low]);
                        }
                        low++;
                    }  
                    
            if(f.size()==k){
                int len=high-low+1;
               res =max(len,res);
            }
            
        }
        
        return res;
    }
};