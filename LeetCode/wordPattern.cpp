bool wordPattern(string pattern, vector<string> word){
   if(word.size() != pattern.length()){
       return false;
   } 
   unordered_map<string, char> words;
   unordered_map<char, string> c;
   for(int i = 0; i < word.size(); i++){
      if(words[word[i]] == 0 && c[pattern[i]] == ""){
         words[word[i]] = pattern[i];
         c[pattern[i]] = word[i];
      }
      if(words[word[i]] !=  pattern[i]){
         return false;
      }
   }
   return true;
}