class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for(char c : s){
            arr[c - 'a']++;
        }
        for(char x : t){
            arr[x - 'a']--;
        }
        for(int i : arr){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};