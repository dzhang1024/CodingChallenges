#include <string>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int counter = 0;
        int Lcount = 0;
        int Rcount = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'L'){
                Lcount++;
            }
            else{
                Rcount++;
            }
            if(Lcount == Rcount){
                counter++;
            }
        }
        return counter;
    }
};