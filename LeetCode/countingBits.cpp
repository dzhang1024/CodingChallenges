class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num+1, 0); // initialize length and all numbers to 0 space (n)
        for(int i = 0; i <= num; i++){
            res[i] = res[i/2] + i%2;
        }
        return res;
    }
};