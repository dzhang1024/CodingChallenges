class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = n%10;
        int prod = n%10;
        int last = 0;
        n /= 10;
        while(n > 0){
            sum += n%10;
            prod *= n%10;
            n /= 10;
        }
        last = prod - sum;
        return last;
    }
};