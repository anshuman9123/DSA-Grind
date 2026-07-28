#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    unordered_map<int,int> f;
    int high,low=0,res=0;

    for(high=0;high<fruits.size();high++){
        f[fruits[high]]++; //map me stroe hoga key value ke sath
        while(f.size()>2){
            f[fruits[low]]--;
            if(f[fruits[low]]==0)
            f.erase(fruits[low]);

            low++;
        }
        // exactly k ki baat hoti toh use hota 
        // yha pe AT MOST K kis baat hai.
        // if(f.size()==2){
        //     int length=high-low+1;
        //    
        // }
         res=max(res,high-low+1);
    }
    return res;
    }
};