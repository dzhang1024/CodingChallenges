class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res;
        sort(people.begin(), people.end(), comp);
        for(int i = 0; i < people.size(); i++){
            res.insert(res.begin()+people[i][1], people[i]);
        }
        return res;
    }
    
    static bool comp(vector<int>& v1, vector<int>& v2){
        if(v1[0] != v2[0]){
            return v1[0] > v2[0];
        }
        else{
            return v1[1] < v2[1];
        }
    }
};