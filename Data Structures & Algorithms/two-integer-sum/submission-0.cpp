class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int n = nums.size();
        unordered_map<int, int> m; // value, index

        for (int i = 0; i < n; i++){
            m[nums[i]] = i;
        }

        for (int i = 0; i < n; i++){
            if (m.contains(target - nums[i]) && m[target - nums[i]] != i){
                return {i, m[target - nums[i]]};
            }
        }

        return {};
    }
};