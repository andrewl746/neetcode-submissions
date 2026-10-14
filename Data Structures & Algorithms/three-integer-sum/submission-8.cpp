class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++){
            if (i > 0 && nums[i - 1] == nums[i]) continue;

            int l = i + 1, r = n - 1;

            while (l < r){
                if (l != i + 1 && nums[l - 1] == nums[l]){
                    l++;
                    continue;
                }

                if (nums[i] + nums[l] + nums[r] < 0){
                    l++;
                } else if (nums[i] + nums[l] + nums[r] > 0){
                    r--;
                } else{
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                }
            }
        }

        //[-4, -1, -1, 0, 1, 2]

        return ans;
    }
};
