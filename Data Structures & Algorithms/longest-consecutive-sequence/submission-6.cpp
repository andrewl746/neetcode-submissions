class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        if (nums.empty()) return 0;

        int mx = 1, temp = 1, n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++){
            if (nums[i - 1] == nums[i]) continue;
            if (nums[i - 1] + 1 != nums[i]){
                mx = max(mx, temp);
                temp = 1;
            } else{
                temp++;
            }
        }

        mx = max(mx, temp);

        return mx;
    }
};
