class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1, MAX = 0;
        while(right < prices.size()){
            if(prices[right] > prices[left]){
                int diff = prices[right] - prices[left];
                if(diff > MAX) MAX = diff;
            }
            else left = right;
            right ++;
        }
        return MAX;
    }
};