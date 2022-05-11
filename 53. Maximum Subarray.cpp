class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0, maximum = nums.at(0), l = nums.size();
        
        for(int i = 0; i < l; i++){
            if(current < 0) current = 0;
            current += nums.at(i);
            if(current > maximum) maximum = current;
        }
        return maximum;
    }
};