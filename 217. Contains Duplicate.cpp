class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        std::unordered_set<int> st;
        int l = nums.size();
        
        for(int i=0; i < l; i++){
            if(st.find(nums.at(i)) != st.end()) return true;
            else st.insert(nums.at(i));
        }
        return false;
    }
};