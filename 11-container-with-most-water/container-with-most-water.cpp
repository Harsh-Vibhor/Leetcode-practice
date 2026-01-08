class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int n = height.size() - 1;
        int l1 = height[0];
        int l2 = height[n];
        int i = 0;
        int j = n;
        int k = 0;
        while(k < n){
            int count = abs(i - j);
            int water = min(l1 , l2) * count;
            max_water = max(water , max_water);
            if(l1 < l2){
                i++;
                l1 = height[i];
            }
            else if(l2 <= l1){
                j--;
                l2 = height[j];
            }
            k++;
        }
        return max_water;
    }
};