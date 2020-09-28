#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> last;
        int greatest = 0;
        for(int i = 0; i < candies.size(); i++){
            if(greatest <= candies[i]) {
                greatest = candies[i];
            }
        }
        for(int i = 0; i < candies.size(); i++){
            int candy = candies[i] + extraCandies;
            if(candy >= greatest){
                last.push_back(true);
            }
            else{
                last.push_back(false);
            }
        }
        return last;
    }
};