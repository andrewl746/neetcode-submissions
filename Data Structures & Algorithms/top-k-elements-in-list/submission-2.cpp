class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        int n = nums.size();
        vector<pair<int, int>> v(5000); // frequency, num (if negative, add 2000 to the abs value of it)
        vector<int> ans(k);

        for (int i = 0; i < n; i++){
            if (nums[i] >= 0){
                v[nums[i]].first++;
                v[nums[i]].second = nums[i];
            } else{
                v[abs(nums[i]) + 2000].first++;
                v[abs(nums[i]) + 2000].second = nums[i];
            }
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        for (int i = 0; i < k; i++){
            ans[i] = v[i].second;
        }

        return ans;
    }
};
