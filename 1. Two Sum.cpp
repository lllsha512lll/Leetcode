class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> *ts = new vector<int>();
        for(int i=0; i < nums.size(); i++)
            for(int j=i+1; j < nums.size(); j++)
                if(nums.at(i)+nums.at(j)==target)
                {
                    ts->push_back(i);
                    ts->push_back(j);
                    return *ts;
                }
        return *ts;
    }
};