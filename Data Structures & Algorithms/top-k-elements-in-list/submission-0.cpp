class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        vector<vector<int>> freq(nums.size()+1);
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it:mp){
            freq[it.second].push_back(it.first);
        }
        for(int i=freq.size()-1;i>=0;i--){
            for(auto it:freq[i]){
                ans.push_back(it);
                if(ans.size()==k){
                    return ans;
                }
            }
            
        }
        return {};

    }
};
