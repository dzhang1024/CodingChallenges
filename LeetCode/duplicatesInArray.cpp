class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <= 1){
            return false; 
        }
        unordered_set<int> freq;
        for(int x: nums){
            if(freq.count(x) == 1){
                return true;
            }
            else{
                freq.insert(x);
            }
        }
        return false;
    }
};