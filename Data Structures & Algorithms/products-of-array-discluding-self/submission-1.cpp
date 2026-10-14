class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n = nums.size(), zeros = 0, prod = 1, onezeroprod = 1; // only for edge case where theres one zero
        vector<int> ans(n);

        for (int i = 0; i < n; i++){
            prod *= nums[i];

            if (nums[i] != 0){
                onezeroprod *= nums[i];
            } else{
                zeros++;
            }
        }

        for (int i = 0; i < n; i++){
            if (nums[i] != 0){
                ans[i] = prod / nums[i];
            } else{
                if (zeros == 1){
                    ans[i] = onezeroprod;
                } else{
                    ans[i] = prod;
                }
            }
        }

        return ans;
    }
};
