#include <string>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string last = address;
        for(int i = 0;i < last.size(); i++){
            if(last[i] == '.'){
                last.replace(i, 1, "[.]");
                i+=3;
            }
        }
        return last;
    }
};