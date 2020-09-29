class Solution {
public:
    string frequencySort(string s) {
        map<char, int> freq; 
        string res = "";
        for(char c: s){
            freq[c]++;
        }
        vector<int> nums;
        for(pair key: freq){
            nums.push_back(key.second);
        }
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        set<char> x;
        for(int i = 0; i < nums.size(); i++){
            for(auto key: freq){
                if(key.second == nums[i] && x.find(key.first) == x.end()){
                    for(int j = 0; j < nums[i]; j++){
                        res += key.first;
                    }
                    x.insert(key.first);
                }
            }
        }
        return res; 
    }
};