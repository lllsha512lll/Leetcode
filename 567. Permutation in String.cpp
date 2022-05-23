class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1count[26]={0}, s2count[26]={0};
        int s1length = s1.length(), s2length = s2.length();
        
        if(s1length > s2length || s1length == 0 || s2length == 0) return false;
        
        for(int i=0; i < s1length; i++){
            s1count[s1[i] - 'a']++;
            s2count[s2[i] - 'a']++;
        }
        
        for(int i=0; i < s2length-s1length; i++){
            if(isPerm(s1count,s2count)) return true;
            s2count[s2[i] - 'a']--;
            s2count[s2[i+s1length] - 'a']++;
        }
        if(isPerm(s1count,s2count)) return true;
        return false;
    }
    bool isPerm(int s1c[26], int s2c[26]){
        for(int i=0; i < 26; i++)
            if(s1c[i] != s2c[i])
                return false;
        return true;
    }
};