class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int , int> m;
        for(int i : nums){
            m[i]++;
        }
        for(auto &a : m){
            if(a.second > 1){
                return a.first;
            }
        }
        return 0;
    }
};