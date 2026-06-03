class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count=0;
        for(auto num : nums){
            if(mp.find(num)!=mp.end()) continue;
                int left=mp.count(num-1)?mp[num-1]:0;
                int right=mp.count(num+1)?mp[num+1]:0;
                int sum=left+right+1;
                mp[num]=sum;
                mp[num-left]=sum;
                mp[num+right]=sum;
                count=max(count,sum);
            
        }
        return count;
    }
};
