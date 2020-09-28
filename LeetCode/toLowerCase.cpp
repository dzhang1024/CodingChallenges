class Solution {
public:
    string toLowerCase(string str) {
        string last = "";
        for(int i =0; i < str.length(); i++){
            last += tolower(str[i]);
        }
        return last;
    }
};