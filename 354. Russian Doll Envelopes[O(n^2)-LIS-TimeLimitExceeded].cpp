class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        std::size_t s = envelopes.size();
        std::vector<int> LIS(s,1);
        std::sort(envelopes.begin(), envelopes.end());
        
        for(auto right = 1; right < s; right++)
            for(auto left = 0; left < right; left++)
                if(envelopes[right][0] > envelopes[left][0] &&
                   envelopes[right][1] > envelopes[left][1] &&
                   LIS[right] < LIS[left] + 1)
                    LIS[right] = LIS[left] + 1;
        
        return *(std::max_element(std::begin(LIS), std::end(LIS)));

    }
};