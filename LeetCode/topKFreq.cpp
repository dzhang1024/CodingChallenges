class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> store; 
        vector<int> res;
        int max = 0;
        for(int x: nums){ //store key, freq in unordered
            store[x]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for(pair key: store){
            bucket[key.second].push_back(key.first);
        }
        for(int i = bucket.size() - 1; i >= 0; i--){
            for(int num: bucket[i]){
                res.push_back(num);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};