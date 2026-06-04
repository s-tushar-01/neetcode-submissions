class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        set<char> se;
        int count=0;
        for(int i=0;i<s.length();i++){
            while(se.find(s[i])!=se.end()){
                se.erase(s[count]);
                count++;
            }
            se.insert(s[i]);
            ans=max(ans,i-count+1);
        }
        return ans;
    }
};
