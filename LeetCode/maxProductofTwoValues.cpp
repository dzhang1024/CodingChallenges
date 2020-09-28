class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int g1 = 0;
        int g2 = 0;
        for(auto x: nums){
            if(x >= g1){
                g2 = g1;
                g1 = x;
            }
            else if(x >= g2 && x <= g1){
                g2 = x;
            }
        }
        return (g1-1)*(g2-1);
        
    }
};