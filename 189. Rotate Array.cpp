class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //mod k by the vector size in case k greater than size
        k = k % nums.size();
        
        //reverse the whole vector
        //reverse the vector from 0 -> k -1
        //reverse the vector from k -> nums.size()-1
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
        
    }
    //reverses a vector fron index left to index right
    void reverse(vector<int> &v, int left, int right){
        int temp;
        while(left < right){
            temp = v[left];
            v[left] = v[right];
            v[right] = temp;
            left++; right--;
        }
    }
};