class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res; 
        res.push_back(1);
        for(int i = 1; i < nums.size(); i++){
            int prod = nums[i-1] * res[i-1];
            res.push_back(prod);
        }
        int right = 1; 
        for(int i = res.size()-1; i >= 0; i--){
            res[i] = right * res[i];
            right *= nums[i];
        }
        return res;
    }
};