class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.length();i++){
            if((s[i]>=65 && s[i]<91) || (s[i]>=97 && s[i]<123) || (s[i]>=48 && s[i]<58)){
                a+=tolower(s[i]);
            }
        }
        int l=0;
        int r=a.length()-1;
        while(l<r){
            if(a[l]!=a[r]) return false;
            l++;r--;
        }
        return true;
    }
};
