class Solution {
public:
    string longestPalindrome(string s) {
        string result = "";
        int maxLength = 0, left, right;
        
        for(int i=0; i < s.length(); i++){
            //odd length check
            left = i; right = i;
            while(left >= 0 && right < s.length() && s[left]==s[right]){
                if(right - left + 1 > maxLength){
                    result = s.substr(left, right - left + 1);
                    maxLength = right -  left + 1;
                }
                left--; right++;
            }
            //even  length check
            left = i; right = i + 1;
            while(left >= 0 && right < s.length() && s[left]==s[right]){
                if(right - left + 1 > maxLength){
                    result = s.substr(left, right - left + 1);
                    maxLength = right -  left + 1;
                }
                left--; right++;
            }
        }
        return result;
    }
};~