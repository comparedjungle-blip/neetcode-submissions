class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> strMap;
    for (const auto& i : strs){
        string sorted = i;
        sort(sorted.begin(), sorted.end());
        strMap[sorted].push_back(i);
    } 
    vector<vector<string>> result;
    for (auto& i : strMap){
        result.push_back(i.second);
        
    }  
    return result; 
    }
};
