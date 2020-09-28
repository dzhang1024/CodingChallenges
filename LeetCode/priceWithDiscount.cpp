class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> last;
        for(int i = 0; i < prices.size() - 1; i++){
            for(int j = i+1; j < prices.size(); j++){
                if(prices[j] <= prices[i]){
                    int price = prices[i] - prices[j];
                    last.push_back(price);
                    break;
                }
                if(j == prices.size() - 1){
                    last.push_back(prices[i]);
                    break;
                }
            }
        }
        last.push_back(prices[prices.size()-1]);
        return last;
    }
};