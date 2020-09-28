class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> map;
        string last = "";
        for(int i = 0; i < paths.size(); i++){
                map[paths[i][0]]++;
                map[paths[i][1]]+= 0;
            }
        for(auto x : map){
            if(x.second == 0){
                last = x.first;
            }
        }
        return last;
    }
};