class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto it: strs){
            ans+=to_string(it.size())+"#"+it;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans2;
        int i=0;
        while(i!=s.length()){
            int y=0;
            while(s[i]!='#'){
                y=y*10+(s[i]-'0');
                i++;
            }
            string z="";
            for(int j=i+1;j<i+1+y;j++){
                z+=s[j];
            }
            ans2.push_back(z);
            i=i+(y+1);
        }
        return ans2;
    }
};
