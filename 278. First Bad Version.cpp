// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int result = -1, l=1, m, r=n;
        while(l <= r){
            m = l + (r-l) / 2;
            if(isBadVersion(m)){
                r = m - 1;
                result = m;
            }else{
                l = m + 1;
            }
        } 
        return result;
    }
};