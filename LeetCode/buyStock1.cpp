class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestCost = INT_MAX;
        int maxProfit = 0;
        for(int num: prices){
            lowestCost = min(lowestCost, num);
            maxProfit = max(maxProfit, num - lowestCost);
        }
        return maxProfit;
    }
};