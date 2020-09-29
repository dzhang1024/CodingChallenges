class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> res; 
        for(int i = 0; i < nums.size(); i++){
            res[nums[i]]++;
        }
        int freq = INT_MIN;
        int maxNum = INT_MIN;
        for(auto num: res){
            if(num.second > freq){
                maxNum = num.first;
                freq = num.second;
            }
        }
        return maxNum;
    }
};