#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> last;
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0){
                for(int j = 0; j < nums[i]; j++){
                    last.push_back(nums[i+1]);
                }
            }
        }
        return last;
    }
};