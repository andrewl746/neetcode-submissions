class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        int n = strs.size();
        unordered_map<string, vector<string>> m; // sorted version | all the strings
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++){
            string x = strs[i];
            sort(x.begin(), x.end());

            m[x].push_back(strs[i]);
        }

        for (auto i: m){
            ans.push_back(i.second);
        }

        return ans;
    }
};
