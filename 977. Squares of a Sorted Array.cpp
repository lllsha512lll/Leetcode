class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s = nums.size(),
        l = 0,
        r = s - 1;
        
        vector<int> sorted(s); s--;
        
        while(l <= r){
            int right = pow(nums.at(r), 2);
            int left = pow(nums.at(l), 2);
            
            if(left >= right){
                sorted[s] = left;
                l++;
                s--;
            }
            else{
                sorted[s] = right;
                r--;
                s--;
            }
        }
        return sorted;
    }
};