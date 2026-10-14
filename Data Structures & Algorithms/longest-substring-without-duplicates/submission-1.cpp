class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int l = 0, r = 0, mx = 0; // when s is 0 or 1 character
        unordered_map<char, int> freq;

        while (r < s.size()){
            if (freq[s[r]] == 0){
                freq[s[r]]++;
                r++;
            } else{
                mx = max(mx, r - l);
                freq[s[l]]--;
                l++;
            }
        }

        mx = max(mx, r - l);

        return mx;
    }
};
