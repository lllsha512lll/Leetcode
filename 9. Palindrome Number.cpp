class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int div=1;
        while(x/div >= 10)
            div*=10;
        while(x!=0){
            int front = x / div;
            int back = x % 10;
            
            if(front != back)
                return false;
            
            x = (x%div) / 10;
            
            div/=100;
        }
        return true;
    }
};