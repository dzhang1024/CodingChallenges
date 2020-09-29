class Solution {
public:
    bool isValid(string s) {
        stack<char> match;
        if(s == ""){
           return true;  
        }
        for(int i = 0; i < s.length(); i++){
            char p = s[i];
            if(p == '(' || p == '{' || p == '['){
                match.push(p);
            }
            else{
                if(match.empty() == true){
                    return false;
                }
                if(p == ')' && match.top() != '('){
                    return false;
                }
                if(p == '}' && match.top() != '{'){
                    return false;
                }
                if(p == ']' && match.top() != '['){
                    return false;
                }
                match.pop();
            }
        }
        return match.empty();
    }
};