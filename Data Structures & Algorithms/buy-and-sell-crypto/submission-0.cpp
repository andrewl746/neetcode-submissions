class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0, mx = 0;

        while (r < prices.size()){
            mx = max(mx, prices[r] - prices[l]);

            if (prices[l] < prices[r]){
                r++;
            } else if (prices[l] > prices[r]){
                l++;
            } else{
                r++;
            }
        }

        return mx;
    }
};
