class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[j] == 0 && nums[i] != 0){
                swap(nums[j],nums[i]);
                j++;
            }
            else if(nums[j] != 0) j++;
        }
    }
};