class Solution {
public:
    bool isPalindrome(string s){
        string str = "", str2;

        for (int i = 0; i < s.size(); i++){
            if (isalnum(s[i])){
                str += tolower(s[i]);
            }
        }

        str2 = str;

        reverse(str2.begin(), str2.end());

        return (str == str2) ? true : false;
    }
};
