#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string last = "";
        for(int i = 0; i < indices.size(); i++){
            for(int j =0; j < indices.size(); j++){
                if(indices[j] == i){
                    last += s[j];
                }
            }
        }
        return last;
    }
};