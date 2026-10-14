class Solution {
public:
    int trap(vector<int>& height) {
        int x, n = height.size(), l = 0, r = 1, mx = 0;

        while (l < r && r < n){
            if (height[l] <= height[r]){
                for (int i = l + 1; i < r; i++){
                    mx += height[l] - height[i];
                }

                l = r;
            }

            r++;
        }

        x = l; r = n - 1; l = n - 2; // reverse

        while (r > l && l >= x){
            if (height[l] >= height[r]){
                for (int i = r - 1; i > l; i--){
                    mx += height[r] - height[i];
                }

                r = l;
            }
            
            l--;
        }

        return mx;
    }
};
