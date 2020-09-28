#include <vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> last;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j >= 0; j--){
                sum = sum + nums[j];
            }
            last.push_back(sum);
        }
        return last;
    }
};