class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int i = 0;
        int j = 0;
        set<char> uniq;
        while(j < s.length()){
            if(uniq.find(s[j]) == uniq.end()){
                uniq.insert(s[j]);
                j++;
                res = max(int(uniq.size()), res);
            }
            else{
                uniq.erase(s[i]);
                i++;
            }
        }
        return res;
    }
};