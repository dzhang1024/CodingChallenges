#include <vector>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> last;
        //first half
        for(int i = 0; i < n; i++){
            last.push_back(nums[i]);
            last.push_back(nums[n+i]);
        }
        return last;
    }
};
