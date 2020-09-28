class Solution {
public:
    string removeOuterParentheses(string S) {
        int counter = 0;
        string last = "";
        for(int i = 0; i < S.length(); i++){
            if(S[i] == '(' && counter == 0){
                counter++;
            }
            else if(S[i] == '(' && counter >= 1){
                counter++;
                last += '(';
            }
            if(S[i] == ')' && counter == 1){
                counter--;
            }
            else if(S[i] == ')' && counter > 1){
                counter--;
                last += ')';
            }
        }
        return last;
    }
};