class Solution {
public:
    bool isAnagram(string s, string t){
        unordered_map<char, int> freqS, freqT;

        if (s.size() != t.size()){
            return false;
        }

        for (int i = 0; i < s.size(); i++){
            freqS[s[i]]++;
            freqT[t[i]]++;
        }

        for (int i = 97; i < 123; i++){
            if (freqS[char(i)] != freqT[char(i)]){
                return false;
            }
        }

        return true;
    }
};
