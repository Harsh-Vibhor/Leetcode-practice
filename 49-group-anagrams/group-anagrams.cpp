class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> temp;
        vector<vector<string>> answer;
        for(string s : strs){
            string key = s;
            sort(key.begin() , key.end());
            temp[key].push_back(s);
        }
        for(auto& s : temp){
            answer.push_back(s.second);
        }
        return answer;
    }
};