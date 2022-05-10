class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, m, r=nums.size()-1;
        
        while(l <= r){
            m = l + (r - l) / 2;
            if(target == nums.at(m)) return m;
            else if(target < nums.at(m)) r = m - 1;
            else l = m + 1;
        }
        return r+1;
    }
};