class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x%10 == 0 && x > 0)){
            return false;
        }
        int last = 0;
        while(x > last){
           last = last*10 + x % 10; 
           x /= 10; 
        }
        return x == last || x == last/10;
    }
};