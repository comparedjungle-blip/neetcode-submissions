class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqMap;
        for(auto& i : nums){
            freqMap[i]++;
        }
        vector<int> result;
        for (int i = 0; i < k; i++){
            auto max = max_element(freqMap.begin(), freqMap.end(), [](const auto& a, const auto& b) {
                return a.second < b.second;
            });
            result.push_back(max->first);
            freqMap.erase(max);
        }
        return result;
    }
    
};
