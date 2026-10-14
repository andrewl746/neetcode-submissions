class Solution {
public:
    int characterReplacement(string s, int k){
        int mx = 0;

        for (int i = 0; i <= 26; i++){
            char target = char(i + 65);
            int l = 0, r = 0, localK = k, localMx = 0;

            while (r < s.size()){
                if (s[r] == target){
                    r++;
                } else{
                    if (localK != 0){
                        r++;
                        localK--;
                    } else{
                        localMx = max(localMx, r - l);
                        
                        if (s[l] != target){
                            localK++;
                        }

                        l++;
                    }
                }
            }

            localMx = max(localMx, r - l);
            mx = max(mx, localMx);
        }

        return mx;
    }
};
