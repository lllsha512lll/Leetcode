class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, s = nums.size();
        for(int right = 0; right < s; right++){
            if(nums[right] != 0){
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                left++;
            }
        }
    }
};