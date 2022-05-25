class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> LIS(nums.size(),1);
        std::size_t s = nums.size();
        int left = 0;
        
        for(auto right = 1; right < s; right++)
            for(auto left = 0; left < right; left++)
                if(nums[right] > nums[left] && LIS[right] < LIS[left] + 1)
                    LIS[right] = LIS[left] + 1;
        
        return *(std::max_element(std::begin(LIS), std::end(LIS)));
    }
};