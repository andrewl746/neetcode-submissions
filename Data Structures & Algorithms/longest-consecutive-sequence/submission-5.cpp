class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        if (nums.empty()) return 0;
        
        int mx = 1, n = nums.size(), temp = 1;
        vector<int> ans;
        set<int> s;

        for (int i = 0; i < n; i++){
            s.insert(nums[i]);
        }

        for (int i: s){
            ans.push_back(i);
        }

        for (auto i: ans) cout << i << " ";

        for (int i = 1; i < n; i++){
            if (ans[i - 1] + 1 != ans[i]){
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
