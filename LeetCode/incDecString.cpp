class Solution {
public:
    string sortString(string s) {
        string last; 
        int a[26] = {0};
        int counter = 0;
        for(int i = 0; i < s.length(); i++){
            a[s[i] - 'a']++;
            counter++;
        }
        while(counter > 0){
            for(int i = 0; i < 26; i++){
                if(a[i] > 0){
                    last += i + 'a';
                    counter--;
                    a[i]--;
                }
            }
            for(int i = 25; i >= 0; i--){
                if(a[i] > 0){
                    last += i + 'a';
                    counter--;
                    a[i]--;
                }
            }
        }
        return last;
    }
};