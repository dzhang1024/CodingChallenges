//super naive solution
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       string alphabet = "abcdefghijklmnopqrstuvwxyz";
       unordered_set<string> container; 
       for(int i = 0; i < words.size(); i++){
           string word = "";
           for(int j = 0; j < words[i].length(); j++){
               int pos = alphabet.find(words[i][j]);
               word += morse[pos];
           }
           container.insert(word);
       }
       return container.size(); 
        
    }
};