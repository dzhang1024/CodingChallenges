class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        recurse(res, n, 0, "");
        return res;
    }
    void recurse(vector<string>& v, int left, int right, string res){
        if(left == 0 && right == 0){
            v.push_back(res);
            return;
        }
        if(left > 0){
            recurse(v, left-1, right+1, res+"(");
        }
        if(right > 0){
            recurse(v, left, right-1, res+")");
        }
    }
};