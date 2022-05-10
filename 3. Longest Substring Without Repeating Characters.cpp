class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Keep a set of encountered characters
        /*
         when a duplicated is encountered, pop from the front 
         until the duplicated is out of the current string. 
         Increment the front add back character to the set.
        */
          
        int longest=0, front=0, l=s.length();
        std::unordered_set<char> char_set;
        
        for(int back=0; back < l; back++){
            /*
              while the recently encountered character is still in the set,
              remove it and increment the front.
            */
            while(char_set.find(s[back]) != char_set.end()){
                char_set.erase(s[front]);
                front++;
            }
            char_set.insert(s[back]);
            longest = max(longest, back-front+1);
        }
        return longest;
    }
};