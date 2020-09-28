#include <vector>
#include <map>
#include <utility>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res; 
        map<int, int> freq;
        for(int x: nums){
            freq[x]++;
        }
        int num1 = 0;
        int num2 = 0;
        for(auto key: freq){
            num1 = target - key.first;
            if(freq[num1] > 0){
                num2 = key.first;
                break;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == num1 || nums[i] == num2 && res.size() < 2){
                res.push_back(i);
            }
        }
        return res;
        
    }
};