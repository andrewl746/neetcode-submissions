class Solution {
public:
    char c;

    string encode(vector<string>& strs){
        unordered_map<char, int> freq;
        string str = "";

        for (int i = 0; i < strs.size(); i++){
            for (int j = 0; j < strs[i].size(); j++){
                freq[j]++;
            }
        }

        for (int i = 0; i < 256; i++){
            if (freq[char(i)] == 0){
                c = char(i);
                break;
            }
        }

        for (int i = 0; i < strs.size(); i++){
            str += strs[i];
            str += c;
        }

        return str;
    }

    vector<string> decode(string s){
        vector<string> ans;
        string str = "";

        for (int i = 0; i < s.size(); i++){
            if (s[i] != c){
                str += s[i];
            } else{
                ans.push_back(str);
                str = "";
            }
        }

        return ans;
    }
};
