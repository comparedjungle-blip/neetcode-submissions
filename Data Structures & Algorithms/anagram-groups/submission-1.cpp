class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> strMap;
    for (const auto& s : strs){
        string sortedS = s;
        sort(sortedS.begin(), sortedS.end());
        strMap[sortedS].push_back(s);
    } 
    vector<vector<string>> result;
    for (auto& i : strMap){
        result.push_back(i.second);
        
    }  
    return result; 
    }
};
