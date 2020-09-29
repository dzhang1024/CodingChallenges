class Solution {
public:
    string generateTheString(int n) {
        string last = "";
        if(n % 2 == 0){
           last += "z"; 
           last += string(n-1, 'a');
        }
        else{
            last += string(n, 'z');
        }
        return last;
    }
};