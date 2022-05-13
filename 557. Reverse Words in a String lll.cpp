class Solution {
public:
    string reverseWords(string s) {
        int left = 0, right = 0;
        while(right < s.length()){
            if(s[right] == ' '){
                Reverse(s, left, right-1);
                left = ++right;
                right = left;
            }
            right++;
        }
        Reverse(s, left, right-1);
        return s;
    }
    void Reverse(string &s, int i, int j){
        while(i < j){
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            i++; j--;
        }
    }
};