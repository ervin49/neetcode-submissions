class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(string str : strs){
            string word = str;
            sort(word.begin(),word.end());
            map[word].push_back(str);
        }
        vector<vector<string>> result;
        for(pair<string,vector<string>> entry : map)
            result.push_back(entry.second);
        return result;
    }
};
