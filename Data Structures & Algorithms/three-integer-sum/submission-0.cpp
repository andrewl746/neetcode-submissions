class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        int n = nums.size();
        unordered_map<int, int> freq; // num, freq
        vector<vector<int>> ans;
        set<vector<int>> s;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++){
            freq[nums[i]]++;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j) continue;
                
                int c = -1 * (nums[i] + nums[j]);

                if ((freq[c] == 1 && c != nums[i] && c != nums[j]) || (freq[c] == 2 && !(c == nums[i] && nums[i] == nums[j])) || (freq[c] > 2)){
                    vector<int> temp = {nums[i], nums[j], c};
                    sort(temp.begin(), temp.end());
                    s.insert(temp);
                }
            }
        }

        for (auto i: s){
            ans.push_back(i);
        }

        return ans;
    }
};
