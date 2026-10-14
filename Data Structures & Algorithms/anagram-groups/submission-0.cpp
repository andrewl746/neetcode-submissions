class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        int n = strs.size();
        vector<bool> vis(n, false);
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++){
            vector<string> temp;

            if (!vis[i]){
                for (int j = i; j < n; j++){
                    string x = strs[i], y = strs[j];

                    sort(x.begin(), x.end());
                    sort(y.begin(), y.end());

                    if (!vis[j] && x == y){
                        temp.push_back(strs[j]);
                        vis[j] = true;
                    }
                }
            }

            if (!temp.empty()){
                ans.push_back(temp);
            }
        }

        return ans;
    }
};
