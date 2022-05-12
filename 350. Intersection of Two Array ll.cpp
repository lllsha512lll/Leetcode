class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> s;
        vector<int> result;
        for(int i=0; i < nums1.size(); i++) 
            s.insert(nums1[i]);
        for(int i=0; i < nums2.size(); i++){
            int num = nums2[i];
            if(s.find(num) != s.end()){
                result.push_back(num);
                s.erase(s.lower_bound(num));
            }
        }
            
        return result;
    }
};