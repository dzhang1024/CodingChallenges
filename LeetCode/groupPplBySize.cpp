class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> last;
        vector<vector<int>> group(groupSizes.size()+1);
        for(int i = 0; i < groupSizes.size(); i++){
            group[groupSizes[i]].push_back(i);
            if(group[groupSizes[i]].size() == groupSizes[i]){
                last.push_back({});
                swap(last.back(), group[groupSizes[i]]);
            }
        }
        return last;
    }
};