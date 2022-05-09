class Solution {
public:
    int myAtoi(string s) {
        int i=0, l=s.length(), sign=1, 
        max=2147483647, min=-2147483648;
        
        long long int num=0;
        
        while(i < l && s[i] == 32)i++;
        while(i < l && (s[i] == '-' || s[i] == '+'))
        {
            if(s[i+1] == '-' || s[i+1] == '+')
            {
                num=0;
                i=l;
            }
            else{
                if(s[i]=='-') sign = -1;
            }
            i++;
        }
                  
        while(i < l && s[i]>=48 && s[i]<=57)
        {
            if(num*10+(s[i]-48) >= -2147483648 &&
               num*10+(s[i]-48) <= 2147483647){
                num = num* 10 + (s[i]-48);
                  i++;
            }else{
                if(sign == 1) return 2147483647;
                    else return -2147483648;
            }
                  
        }
        num*=sign;
        
        return num;
        
    }
};